
/*
* The mass of a single molecule of water is about 3.0×10 -23 grams. A quart of water is
* about 950 grams. Write a program that requests an amount of water, in quarts, and
* displays the number of water molecules in that amount.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quart = 950;
    float mol = 3.0e-23;
    int quantity;
    printf("Enter a quantity:");
    scanf("%d", &quantity);
    float total = (quantity * quart) / mol;
    printf("The number of molecules is: %e\n", total);
    return 0;
}
