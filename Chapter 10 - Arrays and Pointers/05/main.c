
/*
* Write a function that returns the difference between the largest and smallest elements of
* an array-of- double . Test the function in a simple program.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

double difference(double a[], int size);

double difference(double a[], int size)
{
    int i;
    double max, min;
    max = a[0];
    for(i = 0;i < size;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    min = a[0];
    for(i = 0;i < size;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    return max - min;
}

int main()
{
    double arr[SIZE];
    int i;
    double diff = 0.0;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    diff = difference(arr, SIZE);
    printf("\nThe difference between the largest and the smallest element of the array is %.1lf\n", diff);
    return 0;
}
