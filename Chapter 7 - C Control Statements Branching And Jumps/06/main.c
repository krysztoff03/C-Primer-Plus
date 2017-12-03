
/*
* Write a program that reads input up to # and reports the number of times that the
* sequence ei occurs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char c;
    int count = 0;
    bool flag;
    while(scanf("%c", &c), c != '#')
    {
        if(c == 'e')
        {
            flag = true;
        }
        else if(c == 'i')
        {
            if(flag)
            {
                count++;
            }
            flag = false;
        }
    }
    printf("The number of \"ei\" characters appears %d times", count);
    return 0;
}
