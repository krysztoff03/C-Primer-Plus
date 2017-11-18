
/*
* Write a program that prompts the user to enter three sets of five double numbers each.
* (You may assume the user responds correctly and doesn’t enter non-numeric data.) The
* program should accomplish all of the following:
* a. Store the information in a 3×5 array.
* b. Compute the average of each set of five values.
* c. Compute the average of all the values.
* d. Determine the largest value of the 15 values.
* e. Report the results.
* Each major task should be handled by a separate function using the traditional C
* approach to handling arrays. Accomplish task “b” by using a function that computes
* and returns the average of a one-dimensional array; use a loop to call this function three
* times. The other tasks should take the entire array as an argument, and the functions
* performing tasks “c” and “d” should return the answer to the calling program.
*/

#include <stdio.h>
#include <stdlib.h>

void enterData(int r, double a[r][5]);
double average(int r, double a[r][5]);
double totalAverage(int r, double a[r][5]);
double max(int r, double a[r][5]);

void enterData(int r, double a[r][5])
{
    int i, j;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < 5;j++)
        {
            printf("arr[%d][%d] = ", i ,j);
            scanf("%lf", &a[i][j]);
        }
    }
}

double average(int r, double a[r][5])
{
    int i, j;
    double av = 0.0;
    for(i = r;i < r + 1;i++)
    {
        for(j = 0;j < 5;j++)
        {
            av += a[i][j];
        }
    }
    return av / 5;
}

double totalAverage(int r, double a[r][5])
{
    int i, j;
    double total = 0.0;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < 5;j++)
        {
            total += a[i][j];
        }
    }
    return total / (r * 5);
}

double max(int r, double a[r][5])
{
    int i, j;
    double maximum;
    maximum = a[0][0];
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < 5;j++)
        {
            if(maximum < a[i][j])
            {
                maximum = a[i][j];
            }
        }
    }
    return maximum;
}

int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    double arr[row][5];
    enterData(row, arr);
    double averageRow[row];
    double averageTot = 0.0;
    int i;
    for(i = 0;i < row;i++)
    {
        averageRow[i] = average(i, arr);
    }
    printf("\nThe average for each row is:\n");
    for(i = 0;i < row;i++)
    {
        printf("Average[%d] = %.1lf\n", i, averageRow[i]);
    }
    averageTot = totalAverage(row, arr);
    printf("The total average of arr[%d][%d] is: %.1lf\n", row, 5, averageTot);
    double maxArray;
    maxArray = max(row, arr);
    printf("The largest value of arr[%d][%d] is: %.1lf\n", row, 5, maxArray);
    return 0;
}
