
/*
* Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
* from which to choose. Use a switch to select the pay rate. The beginning of a run
* should look something like this:
* *****************************************************************
* Enter the number corresponding to the desired pay rate or action:
* 1) $8.75/hr 2) $9.33/hr
* 3) $10.00/hr 4) $11.20/hr
* 5) quit
* *****************************************************************
* If choices 1 through 4 are selected, the program should request the hours worked. The
* program should recycle until 5 is entered. If something other than choices 1 through 5
* is entered, the program should remind the user what the proper choices are and then
* recycle. Use #defined constants for the various earning rates and tax rates.
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

float calculateGrossPay(float h, float pr)
{
    return h * pr;
}

float calculateTaxes(float gp)
{
    float tr;
    if(gp <= PAYRATE1)
    {
        tr = TAXRATE300 * gp;
    }
    else if(gp <= (PAYRATE1 + PAYRATE2))
    {
        tr = TAXRATE150 * (gp - PAYRATE1) + TAXRATE300 * PAYRATE1;
    }
    else
    {
        tr = TAXRATEREST * (gp - (PAYRATE1 + PAYRATE2)) + TAXRATE150 * PAYRATE2 + TAXRATE300 * PAYRATE1;
    }
    return tr;
}

void display(int h, float gp, float tr)
{
    printf("\nHours worked\tGross pay\tTaxes\tNet pay\n");
    printf("%12d\t%9.2f\t%5.2f\t%7.2f\n", h, gp, tr, gp - tr);
}
int main()
{
    int hours;
    float grossPay = 0.0;
    float payRate;
    float taxRate;
    int choice;
    printf("*********************************************************\n"
           "Enter the corresponding to the desired pay rate or action\n"
           "1) $8.75/hr                 2) $9.33/hr\n"
           "3) $10.00/hr                4) $11.20/hr\n"
           "5) quit\n");
    scanf("%d", &choice);
    while(choice != 5)
    {
        switch(choice)
        {
        case 1:
            printf("Enter the hours worked: ");
            scanf("%d", &hours);
            payRate = 8.75;
            grossPay = calculateGrossPay(hours, payRate);
            taxRate = calculateTaxes(grossPay);
            display(hours, grossPay, taxRate);
            break;
        case 2:
            printf("Enter the hours worked: ");
            scanf("%d", &hours);
            payRate = 9.33;
            grossPay = calculateGrossPay(hours, payRate);
            taxRate = calculateTaxes(grossPay);
            display(hours, grossPay, taxRate);
            break;
        case 3:
            printf("Enter the hours worked: ");
            scanf("%d", &hours);
            payRate = 10.00;
            grossPay = calculateGrossPay(hours, payRate);
            taxRate = calculateTaxes(grossPay);
            display(hours, grossPay, taxRate);
            break;
        case 4:
            printf("Enter the hours worked: ");
            scanf("%d", &hours);
            payRate = 11.20;
            grossPay = calculateGrossPay(hours, payRate);
            taxRate = calculateTaxes(grossPay);
            display(hours, grossPay, taxRate);
            break;
        default:
            printf("Enter a valid choice between 1 and 5.\n");
            break;
        }
        printf("*********************************************************\n"
               "Enter the corresponding to the desired pay rate or action\n"
               "1) $8.75/hr                 2) $9.33/hr\n"
               "3) $10.00/hr                4) $11.20/hr\n"
               "5) quit\n");
        scanf("%d", &choice);
    }
    return 0;
}
