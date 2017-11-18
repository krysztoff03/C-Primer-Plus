
/*
* Write a program that initializes a two-dimensional array-of- double and uses one of the
* copy functions from exercise 2 to copy it to a second two-dimensional array. (Because a
* two-dimensional array is an array of arrays, a one-dimensional copy function can be used
* with each subarray.)
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void copy_arr(double t[][3], double s[][3], int size);

void copy_arr(double t[][3], double s[][3], int size)
{
    int i, j;
    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            t[i][j] = s[i][j];
        }
    }
    for(i = 0;i < size;i++)
    {
        for(j = 0;j < size;j++)
        {
            printf("copiedArr[%d][%d] = %.1lf ", i, j, t[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    double arr[SIZE][SIZE];
    double copiedArr[SIZE][SIZE];
    int row, col;
    for(row = 0;row < SIZE;row++)
    {
        for(col = 0;col < SIZE;col++)
        {
            printf("arr[%d][%d] = ", row, col);
            scanf("%lf", &arr[row][col]);
        }
    }
    printf("\n");
    copy_arr(copiedArr, arr, SIZE);


    return 0;
}
