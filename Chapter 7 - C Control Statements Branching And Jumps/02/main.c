
/*
* Write a program that reads input until encountering # . Have the program print each
* input character and its ASCII decimal code. Print eight character-code pairs per line.
* Suggestion: Use a character count and the modulus operator ( % ) to print a newline
* character for every eight cycles of the loop.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int count = 0;
    printf("ASCII Codes:\n");
    printf("Enter character (# to quit):\n");
    while(scanf("%c", &c), c != '#')
    {
        switch(c)
        {
        case ' ':
            printf("' ' : %d ", c);
            break;
        case '\n':
            printf("'\n' : %d ", c);
            break;
        default:
            printf("%c : %d ", c, c);
            break;
        }
        count++;
        if(count % 8 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
