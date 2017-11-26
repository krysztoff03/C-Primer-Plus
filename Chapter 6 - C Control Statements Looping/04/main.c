
/*
* Use nested loops to produce the following pattern:
* A
* BC
* DEF
* GHIJ
* KLMNO
* PQRSTU
* If your system doesn’t encode letters in numeric order, see the suggestion in
* programming exercise 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char c = 'A';
    for(i = 1;i < 7;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf("%c", c++);
        }
        printf("\n");
    }
    return 0;
}
