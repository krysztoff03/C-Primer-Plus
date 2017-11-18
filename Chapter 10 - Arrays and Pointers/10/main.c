
/*
* Write a function that sets each element in an array to the sum of the corresponding
* elements in two other arrays. That is, if array 1 has the values 2 , 4 , 5 , and 8 and array 2
* has the values 1 , 0 , 4 , and 6 , the function assigns array 3 the values 3 , 4 , 9 , and 14 . The
* function should take three array names and an array size as arguments. Test the function
* in a simple program.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void addElements(int a1[], int a2[], int a3[], int size);

void addElements(int a1[], int a2[], int a3[], int size)
{
    int i;
    for(i = 0;i < size;i++)
    {
        a3[i] = a1[i] + a2[i];
    }
}

int main()
{
    int arr1[SIZE], arr2[SIZE], arr3[SIZE];
    int i;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    addElements(arr1, arr2, arr3, SIZE);
    printf("The first array is: ");
    for(i = 0;i < SIZE;i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nThe second array is: ");
    for(i = 0;i < SIZE;i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\nThe sum of elements array is: ");
    for(i = 0;i < SIZE;i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
