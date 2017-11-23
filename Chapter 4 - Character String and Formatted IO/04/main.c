
/*
* Write a program that requests your height in inches and your name, and then displays
* the information in the following form:
* Dabney, you are 6.208 feet tall
* Use type float , and use / for division. If you prefer, request the height in centimeters
* and display it in meters.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inch, cm;
	char name[20];
	printf("Enter your height in inches:");
	scanf("%f", &inch);
	printf("Enter your name: ");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall\n", name, inch / 12);

	printf("Enter your height in centimeters:");
	scanf("%f", &cm);
	printf("Enter your name:");
	scanf("%s", name);
	printf("%s, you are %.3f meters tall\n", name, cm / 100);
    return 0;
}
