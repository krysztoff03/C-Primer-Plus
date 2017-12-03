
/*
* Write a program that accepts a positive integer as input and then displays all the prime
* numbers smaller than or equal to that number.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, number, isPrime;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    printf("Prime numbers between 1 and %d are: ", number);
    for(i = 2;i <= number;i++)
    {
        isPrime = 1;
        for(j = 2;j <= i / 2;j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
