// Week 5, Session 1

/* Advanced task 1
 * Write a C program for enhanced quadratic equation solver
 * that accepts three real numbers a,b,c from the command prompt.
 * The equation is a.x^2 + b.x + c = 0
 * 
 * The program checks for the following conditions and validations:
 * 1. If a = 0, prints "Linear equation"
 * 2. Calculate determinant D: D=b^2 - 4ac
 * 2. If D > 0: Calculate and display two distinct roots
 *    You have done this in Week3, session-2-task3/quadratic.c
 * 3. If D = 0: Calculate and display the single root
 * 4. If D < 0: Identify and calculate real and imaginary parts
 *    imaginary part formula: sqrt(-D)/(2*a)
 */
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>   //for atof()

int main(int argc, char *argv[])
{
	if(argc!=4)
    {
        printf("Usage: %s <a> <b> <c>\n", argv[0]);
        printf("Example: %s 1 -5 6\n", argv[0]);
        return 1;
    }

    // Convert string arguments to floats
    float a=atof(argv[1]);
    float b=atof(argv[2]);
    float c=atof(argv[3]);
	
	//complete the rest of the code
	if(a==0)
    {
        printf("Linear equation\n");
    }
    float disc=b*b-4*a*c;
    if(disc>0)
    {
        float x1;
        float x2;
        float sqrtDisc=sqrt(disc);
        x1=(-b-sqrtDisc)/(2*a);
        x2=(-b+sqrtDisc)/(2*a);
        printf("%f, %f\n",x1,x2);
    }
    else if(disc==0)
    {
        float x;
        x=-b/(2*a);
        printf("%f",x);
    }
    else if(disc<0)
    {
        float a0; //should be a but a is already defined
        float b1;
        float b2;
        a0=-b/(2*a);
        float sqrtDisc=sqrt(-disc);
        b1=(sqrtDisc)/(2*a);
        b2=(-sqrtDisc)/(2*a);
        printf("%f+%f",a0,b1);
        printf("i, ");
        printf("%f+%f",a0,b2);
        printf("i\n");
    }
	return 0;
}