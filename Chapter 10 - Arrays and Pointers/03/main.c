/*
* Write a function that returns the largest value stored in an array-of- int . Test the function
* in a simple program.
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int maxValue(int a[], int size);

int maxValue(int a[], int size)
{
    int max, i;
    max = a[0];
    for(i = 0;i < SIZE;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int arr[SIZE];
    int i, finalValue;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    finalValue = maxValue(arr, SIZE);
    printf("The maximum value of array is %d\n", finalValue);

    return 0;
}
