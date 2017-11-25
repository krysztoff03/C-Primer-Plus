
/*
* Write a program that converts time in minutes to time in hours and minutes. Use
* #define or const to create a symbolic constant for 60. Use a while loop to allow the
* user to enter values repeatedly and terminate the loop if a value for the time of 0 or less
* is entered.
*/

#include <stdio.h>
#include <stdlib.h>

#define MIN 60

int main()
{
    int time;
	int hours, minutes;
	printf("Enter time in minutes:");
	scanf("%d", &time);
	while(time != 0)
	{
		hours = time / MIN;
		minutes = time - (hours * 60);
		printf("%d minutes is %d hours and %d minutes\n", time, hours, minutes);
		printf("Enter time in minutes:");
		scanf("%d", &time);
	}
    return 0;
}
