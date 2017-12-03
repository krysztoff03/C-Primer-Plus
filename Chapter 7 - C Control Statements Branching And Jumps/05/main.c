
/*
* Redo exercise 4 using a switch .
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int count = 0;
    printf("Enter characters (# to quit):\n");
    while(scanf("%c", &c), c != '#')
    {
        switch(c)
        {
        case '.':
            printf("!");
            count++;
            break;
        case '!':
            printf("!!");
            count++;
            break;
        default:
            printf("%c", c);
            break;
        }
    }
    printf("\nThe total number of replaces of . and ! is %d\n", count);
    return 0;
}
