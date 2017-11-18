
/*
* Write a program that declares a 3×5 array of int and initializes it to some values of
* your choice. Have the program print the values, double all the values, and then display
* the new values. Write a function to do the displaying and a second function to do the
* doubling. Have the functions take the array name and the number of rows as arguments.
*/

#include <stdio.h>
#include <stdlib.h>

void print_arr(int r, int a[r][5]);
void double_arr(int r, int a[r][5]);

void print_arr(int r, int a[r][5])
{
    int i, j;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < 5;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void double_arr(int r, int a[r][5])
{
    int i, j;
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < 5;j++)
        {
            a[i][j] *= 2;
        }
    }
}

int main()
{
    int row;
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    int arr[row][5];
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < 5;j++)
        {
            printf("arr[%d][%d] = ", i ,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The original array is:\n");
    print_arr(row, arr);
    printf("\nThe doubled array is:\n");
    double_arr(row, arr);
    print_arr(row, arr);

    return 0;
}
