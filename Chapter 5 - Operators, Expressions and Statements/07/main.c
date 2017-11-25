
/*
* Write a program that requests a type double number and prints the value of the number
* cubed. Use a function of your own design to cube the value and print it. The main()
* program should pass the entered value to this function.
*/

#include <stdio.h>
#include <stdlib.h>

double cube(double n);

double cube(double n)
{
    return n * n * n;
}

int main()
{
    int number, cubedNumber;
    printf("Enter a number:");
    scanf("%d", &number);
    cubedNumber = cube(number);
    printf("The cube of number %d is %d\n", number, cubedNumber);
    return 0;
}
