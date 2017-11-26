
/*
* Write a program that requests two floating-point numbers and prints the value of their
* difference divided by their product. Have the program loop through pairs of input values
* until the user enters nonnumeric input.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number1, number2;
    float difference, product;
    printf("Enter number 1 and number 2: ");
    while((scanf("%f", &number1) == 1) && (scanf("%f", &number2) == 1))
    {
        difference = number1 - number2;
        product = number1 * number2;
        printf("The value of the difference divided by the product of numbers %.2f and %.2f is %.2f\n", number1, number2, difference / product);
        printf("Enter number 1 and number 2 (q to quit): ");
    }
    return 0;
}
