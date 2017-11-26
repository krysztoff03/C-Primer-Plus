
/*
* Write a program that creates an array with 26 elements and stores the 26 lowercase
* letters in it. Also have it show the array contents.
*/

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 26

int main()
{
    char alphabet[LENGTH];
    char letter;
    int i;
    for(letter = 'a';letter - 'a' < LENGTH;letter++)
    {
        alphabet[letter - 'a'] = letter;
    }
    printf("Lowercase alphabet:\n");
    for(i = 0;i < LENGTH;i++)
    {
        printf("%c ", alphabet[i]);
    }
    return 0;
}
