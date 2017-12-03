
/*
* Using if else statements, write a program that reads input up to # , replaces each period
* with an exclamation mark, replaces each exclamation mark initially present with two
* exclamation marks, and reports at the end the number of substitutions it has made.
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
        if(c == '.')
        {
            printf("!");
            count++;
        }
        else if(c == '!')
        {
            printf("!!");
            count++;
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\nThe total number of replaces of . and ! is %d\n", count);
    return 0;
}
