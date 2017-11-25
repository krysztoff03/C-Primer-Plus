
/*
* Change the program addemup.c ( Listing 5.13 ), which found the sum of the first 20
* integers. (If you prefer, you can think of addemup.c as a program that calculates how
* much money you get in 20 days if you receive $1 the first day, $2 the second day, $3 the
* third day, and so on.) Modify the program so that you can tell it interactively how far
* the calculation should proceed. That is, replace the 20 with a variable that is read in.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
	int count = 0;
	int sum = 0;
	printf("Enter a number:");
	scanf("%d", &number);
	while(count <= number)
	{
		sum += count;
		count++;
	}
	printf("The sum of first %d numbers is: %d\n", number, sum);
    return 0;
}
