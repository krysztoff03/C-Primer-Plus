
/*
* Write a program that initializes a two-dimensional 3×5 array-of- double and uses a VLAbased
* function to copy it to a second two-dimensional array. Also provide a VLA-based
* function to display the contents of the two arrays. The two functions should be capable,
* in general, of processing arbitrary N×M arrays. (If you don’t have access to a VLA-capable
* compiler, use the traditional C approach of functions that can process an N×5 array).
*/

#include <stdio.h>
#include <stdlib.h>

void copy_arr(int r, int c, double a1[r][c], double a2[r][c]);

void copy_arr(int r, int c, double a1[r][c], double a2[r][c])
{
    int i, j;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c;j++)
        {
            a2[i][j] = a1[i][j];
        }
    }
}

int main()
{
    int row, col;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    double arr[row][col];
    double copiedArr[row][col];
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
    }
    printf("\n\n");
    printf("The first array is:\n");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("%.1lf ", arr[i][j]);
        }
        printf("\n");
    }
    copy_arr(row, col, arr, copiedArr);
    printf("\n\nThe second array is:\n");
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("%.1lf ", copiedArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
