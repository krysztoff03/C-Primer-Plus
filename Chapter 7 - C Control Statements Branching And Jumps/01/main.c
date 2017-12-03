
/*
* Write a program that reads input until encountering the # character and then reports
* the number of spaces read, the number of newline characters read, and the number of all
* other characters read.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int countSpaces = 0;
    int countNewlines = 0;
    int countOthers = 0;
    while(scanf("%c", &c), c != '#')
    {
        if(c == ' ')
        {
            countSpaces++;
        }
        else if(c == '\n')
        {
            countNewlines++;
        }
        else
            countOthers++;
    }
    printf("The number of spaces is %d\n", countSpaces);
    printf("The number of newline characters is %d\n", countNewlines);
    printf("The number of other characters is %d\n", countOthers);
    return 0;
}
