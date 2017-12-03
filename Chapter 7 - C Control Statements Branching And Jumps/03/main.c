
/*
* Write a program that reads integers until 0 is entered. After input terminates, the
* program should report the total number of even integers (excluding the 0) entered, the
* average value of the even integers, the total number of odd integers entered, and the
* average value of the odd integers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int evenIntegers = 0, oddIntegers = 0;
    float sumEvenIntegers = 0.0, sumOddIntegers = 0.0;
    int number;
    printf("Enter numbers (0 to quit):\n");
    while(scanf("%d", &number), number != 0)
    {
        if(number % 2 == 0)
        {
            evenIntegers++;
            sumEvenIntegers += number;
        }
        else
        {
            oddIntegers++;
            sumOddIntegers += number;
        }
    }
    printf("The average of even integers is %.2f\n", sumEvenIntegers / evenIntegers);
    printf("The average of odd integers is %.2f\n", sumOddIntegers / oddIntegers);
    return 0;
}
