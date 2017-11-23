
/*
* There are 2.54 centimeters to the inch. Write a program that asks you to enter your
* height in inches and then displays your height in centimeters. Or, if you prefer, ask for
* the height in centimeters and convert that to inches.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cm;
    float inch;
    float height;
    printf("Enter your height in inch: ");
    scanf("%f", &inch);
    height = inch * 2.54;
    printf("Your height in inch is: %f\n", height);

    printf("Enter your height in cm: ");
    scanf("%d", &cm);
    height = cm / 2.54;
    printf("Your height in inch is: %f\n", height);
    return 0;
}
