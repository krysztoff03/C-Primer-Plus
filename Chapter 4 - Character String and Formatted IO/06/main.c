
/*
* Write a program that requests the user’s first name and then the user’s last name. Have
* it print the entered names on one line and the number of letters in each name on the
* following line. Align each letter count with the end of the corresponding name, as in the
* following:
* Melissa Honeybee
* 7 8
* Next, have it print the same information, but with the counts aligned with the beginning
* of each name.
* Melissa Honeybee
* 7 8
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20], lastName[20];
	printf("Enter your firstname:");
	scanf("%s", firstName);
	printf("Enter your lastname:");
	scanf("%s", lastName);
	printf("%s %s\n", firstName, lastName);
	printf("%*d %*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
	printf("\n%s %s\n", firstName, lastName);
	printf("%-*d %-*d\n", strlen(firstName), strlen(firstName), strlen(lastName), strlen(lastName));
    return 0;
}
