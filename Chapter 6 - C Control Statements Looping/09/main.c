
/*
* Modify exercise 8 so that it uses a function to return the value of the calculation.
*/

#include <stdio.h>
#include <stdlib.h>

float calculate(float n1, float n2);

float calculate(float n1, float n2)
{
    float difference, product;
    difference = n1 - n2;
    product = n1 * n2;
    return difference / product;
}

int main()
{
    float number1, number2;
    printf("Enter number 1 and number 2: ");
    while((scanf("%f", &number1) == 1) && (scanf("%f", &number2) == 1))
    {
        printf("The value of the difference divided by the product of numbers %.2f and %.2f is %.2f\n", number1, number2, calculate(number1, number2));
        printf("Enter number 1 and number 2 (q to quit): ");
    }
    return 0;
}
