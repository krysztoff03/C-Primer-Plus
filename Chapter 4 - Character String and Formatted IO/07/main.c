
/*
* Write a program that sets a type double variable to 1.0/3.0 and a type float variable
* to 1.0/3.0. Display each result three times—once showing four digits to the right of the
* decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits
* to the right of the decimal. Also have the program include float.h and display the
* values of FLT_DIG and DBL_DIG . Are the displayed values of 1.0/3.0 consistent with these
* values?
*/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    double vard = 1.0 / 3.0;
	float varf = 1.0 / 3.0;
	printf("Double:\n%.4lf\n%.12lf\n%.16lf\n", vard, vard, vard);
	printf("Float:\n%.4f\n%.12f\n%.16f\n", varf, varf, varf);
	printf("FLT_DIG: %f\n", FLT_DIG);
	printf("DBL_DIG: %lf\n", DBL_DIG);
    return 0;
}
