
/*
* Write a program that reads eight integers into an array and then prints them in reverse
* order.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    int arr[SIZE];
    int i;
    printf("Enter integers in the array:\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array's elements in reversed order: ");
    for(i = SIZE - 1;i >= 0;i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
