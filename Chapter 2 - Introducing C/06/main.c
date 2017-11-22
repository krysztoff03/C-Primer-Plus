
/*
* Write a program that creates an integer variable called toes . Have the program set toes
* to 10 . Also have the program calculate what twice toes is and what toes squared is. The
* program should print all three values, identifying them.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toes = 10;
    printf("Toes = %d\n", toes);
    printf("Twice of Toes = %d\n", toes * 2);
    printf("Square of Toes = %d\n", toes * toes);
    return 0;
}
