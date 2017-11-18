/*
* Rewrite the rain program in Listing 10.7 so that the main tasks are performed by
* functions instead of in main() .
*/


#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

void rainfall(int y, int m, float r[y][m]);
void yearlyAverage(int y, int m, float r[y][m]);

float subtot, total;

void rainfall(int y, int m, float r[y][m])
{
    int i, j;
    printf(" YEAR     RAINFALL (inches)\n");
    for(i = 0, total = 0;i < y;i++)
    {
        for(j = 0, subtot = 0;j < m;j++)
        {
            subtot += *(*(r + i) + j);
        }
        printf("%5d %15.1lf\n", 2010 + i, subtot);
        total += subtot;
    }
}

void yearlyAverage(int y, int m, float r[y][m])
{
    int i, j;
    printf("\nThe yearly average is %.lf inches.\n\n", total/y);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for(j = 0;j < m;j++)
    {
        for(i = 0, subtot = 0;i < y;i++)
        {
            subtot += *(*(r + i) + j);
        }
        printf("%4.1lf\n", subtot/y);
    }
}

int main()
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    rainfall(YEARS, MONTHS, rain);
    yearlyAverage(YEARS, MONTHS, rain);
    return 0;
}
