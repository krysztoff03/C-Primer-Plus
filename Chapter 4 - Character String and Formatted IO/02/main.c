
/*
* Write a program that requests your first name and does the following with it:
* a. Prints it enclosed in double quotation marks
* b. Prints it in a field 20 characters wide, with the whole field in quotes and the name
* at the right end of the field
* c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed
* in quotes
* d. Prints it in a field three characters wider than the name
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[20];
	printf("Enter your first name:");
	scanf("%s", firstName);
	printf("\"%s\"\n", firstName);
	printf("\"%20s\"\n", firstName);
	printf("\"%-20s\"\n", firstName);
	printf("%*s\n", strlen(firstName) + 3, firstName);
    return 0;
}
