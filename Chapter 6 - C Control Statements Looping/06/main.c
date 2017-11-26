
/*
* Write a program that prints a table with each line giving an integer, its square, and its
* cube. Ask the user to input the lower and upper limits for the table. Use a for loop.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower, upper;
    int i;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("Number\tSquare\tCube\n");
    for(i = lower;i <= upper;i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}
