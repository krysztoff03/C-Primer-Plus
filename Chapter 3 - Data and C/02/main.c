
/*
* Write a program that asks you to enter an ASCII code value, such as 66, and then prints
* the character having that ASCII code.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
	printf("Enter an ASCII code value: ");
	scanf("%d", &c);
	printf("The character is: %c\n", c);
    return 0;
}
