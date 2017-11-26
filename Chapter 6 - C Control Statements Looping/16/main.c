
/*
* Daphne invests $100 at 10% simple interest. (That is, every year, the investment earns
* an interest equal to 10% of the original investment.) Deirdre invests $100 at 5% interest
* compounded annually. (That is, interest is 5% of the current balance, including previous
* addition of interest.) Write a program that finds how many years it takes for the value
* of Deirdre’s investment to exceed the value of Daphne’s investment. Also show the two
* values at that time.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float daphneInitialBalance = 100.0;
    float daphneInterest = 0.1;
    float deirdreInterest = 0.05;
    int years = 0;
    float daphneTotalBalance = 100.0, deirdreTotalBalance = 100.0;
    while(deirdreTotalBalance <= daphneTotalBalance)
    {
        deirdreTotalBalance *= 1.0 + deirdreInterest;
        daphneTotalBalance += daphneInitialBalance * daphneInterest;
        years++;
    }
    printf("The value of Deirdre's investment exceed the value of Daphne's investment after %d years\n", years);
    printf("Daphne's total balance is $%.2f\n", daphneTotalBalance);
    printf("Deirdre's total balance is $%.2f\n", deirdreTotalBalance);

    return 0;
}
