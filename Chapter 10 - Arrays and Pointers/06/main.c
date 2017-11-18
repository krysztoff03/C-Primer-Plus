
/*
* Write a function that reverses the contents of an array of double and test it in a simple
* program.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void reverse(double a[], int size);

void reverse(double a[], int size)
{
    int i;
    for(i = size - 1;i >= 0;i--)
    {
        printf("%.1lf ", a[i]);
    }
}

int main()
{
    double arr[SIZE];
    int i;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    printf("The array in initial order is: ");
    for(i = 0;i < SIZE;i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\nThe array in reverse order is: ");
    reverse(arr, SIZE);
    return 0;
}
