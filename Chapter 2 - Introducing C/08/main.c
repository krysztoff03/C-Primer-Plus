
/*
* In C, one function can call another. Write a program that calls a function named one_
* three() . This function should display the word one on one line, call a second function
* named two() , and then display the word three on one line. The function two() should
* display the word two on one line. The main() function should display the phrase
* starting now: before calling one_three() and display done! after calling it. Thus, the
* output should look like the following:
* starting now:
* one
* two
* three
* done!
*/

#include <stdio.h>
#include <stdlib.h>

void one_three();
void two();

void one_three()
{
    printf("One\n");
    two();
    printf("Three\n");
}

void two()
{
    printf("Two\n");
}

int main()
{
    printf("Starting now:\n");
    one_three();
    printf("Done!\n");
    return 0;
}
