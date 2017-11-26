
/*
* Write a program that reads a single word into a character array and then prints the word
* backward. Hint: Use strlen() ( Chapter 4 ) to compute the index of the last character in
* the array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter a word: ");
    scanf("%s", str);
    int i, letters;
    letters = strlen(str) - 1;
    printf("The word printed backwards is:");
    for(i = letters;i >= 0;i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}
