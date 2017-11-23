
/*
* In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces, an
* ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program that requests a
* volume in cups and that displays the equivalent volumes in pints, ounces, tablespoons,
* and teaspoons. Why does a floating-point type make more sense for this application than
* an integer type?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cups;
    printf("Enter volume in cups:");
    scanf("%f", &cups);
    float pint, ounce, tablespoon, teaspoon;
    pint = 2 * cups;
    ounce = cups / 8;
    tablespoon = ounce / 2;
    teaspoon = tablespoon / 3;
    printf("Cups: %.1f\n"
           "Pints: %.1f\n"
           "Ounces: %.1f\n"
           "Tablespoons: %.1f\n"
           "Teaspoons: %.1f\n", cups, pint, ounce, tablespoon, teaspoon);
    return 0;
}
