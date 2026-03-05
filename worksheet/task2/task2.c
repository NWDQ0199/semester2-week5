/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID: 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int invalid(void);

int main(void)
{
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
	if(!fgets(hex,sizeof(hex),stdin))
	{
		return invalid();
	}
	//printf("hex: %s\n",hex);

	long pow=1;
	for(int i=strlen(hex)-1;i>=0;i--) //i=8 is the \0
	{
		//printf("i: %i\n",i);
		//I could do this more efficiently with something like atoi for the 0-9 digits,
		//but this works and takes less long to write
		long digit;
		switch(hex[i])
		{
			case '0':
				digit=0; break;
			case '1':
				digit=1; break;
			case '2':
				digit=2; break;
			case '3':
				digit=3; break;
			case '4':
				digit=4; break;
			case '5':
				digit=5; break;
			case '6':
				digit=6; break;
			case '7':
				digit=7; break;
			case '8':
				digit=8; break;
			case '9':
				digit=9; break;
			case 'A':
				digit=10; break;
			case 'B':
				digit=11; break;
			case 'C':
				digit=12; break;
			case 'D':
				digit=13; break;
			case 'E':
				digit=14; break;
			case 'F':
				digit=15; break;
			case '\n':
				digit=0; break;
			case '\0':
				digit=0; break;
			default:
				//printf("_%c_\n",hex[i]);
				return invalid();
		}
		decimal+=pow*digit;
		pow*=16l;
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal: %ld\n", decimal);
	
	return 0;
}

int invalid(void)
{
	printf("Error: Invalid Hexadecimal\n");
	return 1;
}