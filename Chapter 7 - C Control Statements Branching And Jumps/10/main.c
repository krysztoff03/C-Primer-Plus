
/*
* The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
* four categories, and each category had two rates. Here is a summary (dollar amounts are
* taxable income):
* Category Tax
* Single 15% of first $17,850 plus 28% of excess
* Head of Household 15% of first $23,900 plus 28% of excess
* Married, Joint 15% of first $29,750 plus 28% of excess
* Married, Separate 15% of first $14,875 plus 28% of excess
* For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
* + 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
* and the taxable income and that then calculates the tax. Use a loop so that the user can
* enter several tax cases.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float salary, tax = 0.0;
    printf("Category\t\tTax\n"
           "1.Single\t\t15%% of first $17.850 plus 28%% of excess\n"
           "2.Head of Household\t15%% of first $23.900 plus 28%% of excess\n"
           "3.Married, Joint\t15%% of first $29.750 plus 28%% of excess\n"
           "4.Married, Separate\t15%% of first $14.875 plus 28%% of excess\n");
    printf("Choice a case (-1 to end): ");
    scanf("%d", &choice);
    while(choice != -1)
    {
        switch(choice)
        {
        case 1:
            printf("Enter salary: ");
            scanf("%f", &salary);
            tax = 0.15 * salary + 0.28 * (salary - 17850);
            printf("Total tax is: %.2f\n", tax);
            break;
        case 2:
            printf("Enter salary: ");
            scanf("%f", &salary);
            tax = 0.15 * salary + 0.28 * (salary - 23900);
            printf("Total tax is: %.2f\n", tax);
            break;
        case 3:
            printf("Enter salary: ");
            scanf("%f", &salary);
            tax = 0.15 * salary + 0.28 * (salary - 29750);
            printf("Total tax is: %.2f\n", tax);
            break;
        case 4:
            printf("Enter salary: ");
            scanf("%f", &salary);
            tax = 0.15 * salary + 0.28 * (salary - 14875);
            printf("Total tax is: %.2f\n", tax);
            break;
        default:
            printf("Enter a valid choice, between 1 and 4!\n");
            break;
        }
        printf("Choice a case (-1 to end): ");
        scanf("%d", &choice);
    }
    return 0;
}
