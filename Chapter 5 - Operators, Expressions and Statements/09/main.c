
/*
* Write a program that requests the user to enter a Fahrenheit temperature. The program
* should read the temperature as a type double number and pass it as an argument to
* a user-supplied function called Temperatures() . This function should calculate the
* Celsius equivalent and the Kelvin equivalent and display all three temperatures with a
* precision of two places to the right of the decimal. It should identify each value with the
* temperature scale it represents. Here is the formula for converting Fahrenheit to Celsius:
* Celsius = 5.0 / 9.0 * (Fahrenheit - 32.0)
* The Kelvin scale, commonly used in science, is a scale in which 0 represents absolute
* zero, the lower limit to possible temperatures. Here is the formula for converting Celsius
* to Kelvin:
* Kelvin = Celsius + 273.16
* The Temperatures() function should use const to create symbolic representations of
* the three constants that appear in the conversions. The main() function should use
* a loop to allow the user to enter temperatures repeatedly, stopping when a q or other
* nonnumeric value is entered. Use the fact that scanf() returns the number of items
* read, so it will return 1 if it reads a number, but it won’t return 1 if the user enters q . The
* == operator tests for equality, so you can use it to compare the return value of scanf()
* with 1 .
*/

#include <stdio.h>
#include <stdlib.h>

void temperatures(double f);

void temperatures(double f)
{
    double c, k;
    double const cel_to_fahr = 5.0 / 9.0;
    double const cel_to_fahrenheit = 32.0;
    double const kel_to_cel = 273.16;
    c = cel_to_fahr * (f - cel_to_fahrenheit);
    printf("%.2lf F = %.2lf C\n", f, c);
    k = c + kel_to_cel;
    printf("%.2lf F = %.2lf K\n", f, k);
}

int main()
{
    double fahrenheit;
    printf("Enter a Fahrenheit temperature: ");
    while(scanf("%lf", &fahrenheit) == 1)
    {
        temperatures(fahrenheit);
        printf("Enter a Fahrenheit temperature: ");
    }
    return 0;
}
