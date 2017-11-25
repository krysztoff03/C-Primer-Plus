
/*
* Write a program that displays the results of applying the modulus operation. The user
* should first enter an integer to be used as the second operand, which will then remain
* unchanged. Then the user enters the numbers for which the modulus will be computed,
* terminating the process by entering 0 or less. A sample run should look like this:
* This program computes moduli.
* Enter an integer to serve as the second operand: 256
* Now enter the first operand: 438
* 438 % 256 is 182
* Enter next number for first operand (<= 0 to quit): 1234567
* 1234567 % 256 is 135
* Enter next number for first operand (<= 0 to quit): 0
* Done
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secondOperand, firstOperand;
	int difference, result;
	printf("This program computes moduli.\n"
		   "Enter an integer to serve as the second operand: ");
	scanf("%d", &secondOperand);
	printf("Now enter the first operand: ");
	scanf("%d", &firstOperand);
	result = firstOperand % secondOperand;
	printf("%d %% %d is %d\n", firstOperand, secondOperand, result);
	printf("Enter next number for first operand (<= 0 to quit): ");
	scanf("%d", &firstOperand);
	while(firstOperand != 0)
	{
		result = firstOperand % secondOperand;
		printf("%d %% %d = %d\n", firstOperand, secondOperand, result);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &firstOperand);
	}
	printf("Done!\n");
    return 0;
}
