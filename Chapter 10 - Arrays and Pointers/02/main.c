
/*
* Write a program that initializes an array-of- double and then copies the contents of the
* array into three other arrays. (All four arrays should be declared in the main program.) To
* make the first copy, use a function with array notation. To make the second copy, use a
* function with pointer notation and pointer incrementing. Have the first two functions
* take as arguments the name of the target array, the name of the source array, and the
* number of elements to be copied. Have the third function take as arguments the name
* of the target, the name of the source, and a pointer to the element following the last
* element of the source.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void copy_arr(double t[], double s[], int size);
void copy_ptrs(double t[], double s[], int size);

void copy_arr(double t[], double s[], int size)
{
    int i;
    for(i = 0;i < size;i++)
    {
        t[i] = s[i];
    }
}

void copy_ptrs(double t[], double s[], int size)
{
    int i;
    for(i = 0;i < size;i++)
    {
        *(t + i) = *(s + i);
    }
}

int main()
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double source1[5];
    double source2[5];
    double source3[5];

    copy_arr(source1, source, SIZE);
    copy_arr(source2, source, SIZE);
    copy_ptrs(source3, source, SIZE);

    int i;
    for(i = 0;i < SIZE;i++)
    {
        printf("source1[%d] = %lf\n", i, source1[i]);
    }
    printf("\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("source2[%d] = %lf\n", i, source2[i]);
    }
    printf("\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("source3[%d] = %lf\n", i, source3[i]);
    }

    return 0;
}
