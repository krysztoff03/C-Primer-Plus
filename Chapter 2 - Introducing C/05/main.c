
/*
* Write a program that produces the following output:
* Brazil, Russia, India, China
* India, China,
* Brazil, Russia
* Have the program use two user-defined functions in addition to main() : one named
* br() that prints “Brazil, Russia” once, and one named ic() that prints “India, China”
* once. Let main() take care of any additional printing tasks.
*/

#include <stdio.h>
#include <stdlib.h>

void br();
void ic();

void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf(" India, China");
}

int main()
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    return 0;
}
