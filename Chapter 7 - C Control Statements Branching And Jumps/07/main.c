
/*
* Write a program that requests the hours worked in a week and then prints the gross pay,
* the taxes, and the net pay. Assume the following:
* a. Basic pay rate = $10.00/hr
* b. Overtime (in excess of 40 hours) = time and a half
* c. Tax rate: #15% of the first $300
* 20% of the next $150
* 25% of the rest
* Use #define constants, and don’t worry if the example does not conform to current
* tax law.
*/

#include <stdio.h>
#include <stdlib.h>

#define BASICPAYRATE 10
#define WEEKLYHOURS 40
#define OVERTIME 1.5
#define PAYRATE1 300
#define PAYRATE2 150
#define TAXRATE300 0.15
#define TAXRATE150 0.2
#define TAXRATEREST 0.25

int main()
{
    int hours;
    float grossPay = 0.0;
    float taxRate;
    printf("Enter the hours worked: ");
    scanf("%d", &hours);
    if(hours <= 40)
    {
        grossPay = BASICPAYRATE * hours;
    }
    else
    {
        grossPay = (BASICPAYRATE * WEEKLYHOURS) + (OVERTIME * BASICPAYRATE * (hours - WEEKLYHOURS));
    }

    if(grossPay <= PAYRATE1)
    {
        taxRate = TAXRATE300 * grossPay;
    }
    else if(grossPay <= (PAYRATE1 + PAYRATE2))
    {
        taxRate = TAXRATE150 * (grossPay - PAYRATE1) + TAXRATE300 * PAYRATE1;
    }
    else
    {
        taxRate = TAXRATEREST * (grossPay - (PAYRATE1 + PAYRATE2)) + TAXRATE150 * PAYRATE2 + TAXRATE300 * PAYRATE1;
    }
    printf("\nHours worked\tGross pay\tTaxes\tNet pay\n");
    printf("%12d\t%9.2f\t%5.2f\t%7.2f\n", hours, grossPay, taxRate, grossPay - taxRate);
    return 0;
}
