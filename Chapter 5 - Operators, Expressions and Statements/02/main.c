
/*
* Write a program that asks for an integer and then prints all the integers from (and
*including) that value up to (and including) a value larger by 10. (That is, if the input is 5,
* the output runs from 5 to 15.) Be sure to separate each output value by a space or tab or
* newline.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, setNumber;
	printf("Enter a number:");
	scanf("%d", &number);
	setNumber = number;
	while(number <= setNumber + 10)
	{
		printf("%d ", number);
		number++;
	}
    return 0;
}
