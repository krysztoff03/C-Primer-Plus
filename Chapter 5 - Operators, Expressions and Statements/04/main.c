
/*
* Write a program that asks the user to enter a height in centimeters and then displays the
* height in centimeters and in feet and inches. Fractional centimeters and inches should
* be allowed, and the program should allow the user to continue entering heights until a
* nonpositive value is entered. A sample run should look like this:
* Enter a height in centimeters: 182
* 182.0 cm = 5 feet, 11.7 inches
* Enter a height in centimeters (<=0 to quit): 168.7
* 168.0 cm = 5 feet, 6.4
* inches
* Enter a height in centimeters (<=0 to quit): 0
* bye
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm;
	float inch;
	int foot;
	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);
	foot = cm / 30.48;
    inch = (cm - (foot * 30.48)) * 0.3937007874;
    printf("%.1f cm = %d feet, %.1f inches\n", cm, foot, inch);
	printf("Enter a height in centimeters (<= 0 to quit): ");
	scanf("%f", &cm);
	while(cm != 0)
	{
		foot = cm / 30.48;
        inch = (cm - (foot * 30.48)) * 0.3937007874;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, foot, inch);
        printf("Enter a height in centimeters (<= 0 to quit): ");
        scanf("%f", &cm);
	}
	printf("Bye\n");
    return 0;
}
