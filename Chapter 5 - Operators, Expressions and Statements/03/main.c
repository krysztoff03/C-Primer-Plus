
/*
* Write a program that asks the user to enter the number of days and then converts that
* value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days.
* Display results in the following format:
* 18 days are 2 weeks, 4 days.
* Use a while loop to allow the user to repeatedly enter day values; terminate the loop
* when the user enters a nonpositive value, such as 0 or -20 .
*/

#include <stdio.h>
#include <stdlib.h>

#define WEEKDAYS 7

int main()
{
    int totalDays;
	int week, day;
	printf("Enter the number of days:");
	scanf("%d", &totalDays);
	while(totalDays != 0)
	{
		week = totalDays / WEEKDAYS;
		day = totalDays - (week * 7);
		printf("%d days are %d weeks, %d days.\n", totalDays, week, day);
		printf("Enter the number of days:");
		scanf("%d", &totalDays);
	}
    return 0;
}
