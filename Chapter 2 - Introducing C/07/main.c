
/*
* Many studies suggest that smiling has benefits. Write a program that produces the
* following output:
* Smile!Smile!Smile!
* Smile!Smile!
* Smile!
* Have the program define a function that displays the string Smile! once, and have the
* program use the function as often as needed.
*/

#include <stdio.h>
#include <stdlib.h>

void phrase();

void phrase()
{
    printf("Smile!");
}

int main()
{
    phrase();
    phrase();
    phrase();
    printf("\n");
    phrase();
    phrase();
    printf("\n");
    phrase();
    printf("\n");
    return 0;
}
