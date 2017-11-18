
/*
* Write a function that returns the index of the largest value stored in an array-of- double .
* Test the function in a simple program.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int indexArr(double a[], int size);

int indexArr(double a[], int size)
{
    int i;
    double max;
    max = a[0];
    for(i = 0;i < size;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    for(i = 0;i < size;i++)
    {
        if(max == a[i])
            return i;
    }
}

int main()
{
    double arr[SIZE];
    int i, ind;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    ind = indexArr(arr, SIZE);
    printf("The index of the largest value is %d\n", ind);
    return 0;
}
