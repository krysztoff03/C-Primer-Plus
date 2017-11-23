
/*
* There are approximately 3.156 × 10 7 seconds in a year. Write a program that requests
* your age in years and then displays the equivalent number of seconds.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int years;
    int seconds;
    printf("Enter your age in years:");
    scanf("%d", &years);
    seconds = 3156 * 107 * years;
    printf("The number of seconds for %d years is: %d\n", years, seconds);
    return 0;
}
