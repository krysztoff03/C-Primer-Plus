
/*
* Use a copy function from Programming Exercise 2 to copy the third through fifth
* elements of a seven-element array into a three-element array. The function itself need
* not be altered; just choose the right actual arguments. (The actual arguments need not be
* an array name and array size. They only have to be the address of an array element and a
* number of elements to be processed.)
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

void copy_arr(double t[], double s[], int size);

void copy_arr(double t[], double s[], int size)
{
    int i;
    for(i = 0;i < size - 4;i++)
    {
        t[i] = s[i];
    }
}

int main()
{
    double arr[SIZE];
    double secondArr[SIZE - 4];
    int i;
    for(i = 0;i < SIZE;i++)
    {
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    printf("The original array is: ");
    for(i = 0;i < SIZE;i++)
    {
        printf("%.1lf ", arr[i]);
    }
    printf("\nThe second array is: ");
    copy_arr(secondArr, arr + 2, SIZE);
    for(i = 0;i < SIZE - 4;i++)
    {
        printf("%.1lf ", secondArr[i]);
    }
    return 0;
}
