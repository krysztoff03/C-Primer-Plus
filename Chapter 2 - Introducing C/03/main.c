
/*
* Write a program that converts your age in years to days and displays both values. At this
* point, don’t worry about fractional years and leap years.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, years;
    printf("Enter your age in years:");
    scanf("%d", &years);
    days = years * 365;
    printf("Years: %d\n", years);
    printf("Days: %d\n", days);
    return 0;
}
