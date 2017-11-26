
/*
* Write a program that reads in a line of input and then prints the line in reverse order.
* You can store the input in an array of char ; assume that the line is no longer than 255
* characters. Recall that you can use scanf() with the %c specifier to read a character at
* a time from input and that the newline character ( \n ) is generated when you press the
* Enter key.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 255

int main()
{
    char str[SIZE];
    int i = 0;
    printf("Enter a string:\n");
    while(scanf("%c", &str[i]), str[i] != '\n')
    {
        i++;
    }
    for(;i >= 0;i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
