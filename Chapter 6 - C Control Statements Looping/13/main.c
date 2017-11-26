
/*
* Write a program that creates an eight-element array of int s and sets the elements to the
* first eight powers of 2 and then prints the values. Use a for loop to set the values, and,
* for variety, use a do while loop to display the values.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    int arr[SIZE];
    int i;
    int power  = 1;
    printf("Enter array's elements:\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < SIZE;i++)
    {
        power *= 2;
        arr[i] = power;
    }
    i = 0;
    do
    {
        printf("%d ", arr[i]);
        i++;
    }while(i < SIZE);

    return 0;
}
