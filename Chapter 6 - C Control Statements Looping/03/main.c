
/*
* Use nested loops to produce the following pattern:
* F
* FE
* FED
* FEDC
* FEDCB
* FEDCBA
* Note: If your system doesn’t use ASCII or some other code that encodes letters in
* numeric order, you can use the following to initialize a character array to the letters of
* the alphabet:
* char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
* Then you can use the array index to select individual letters; for example, lets[0] is
* 'A' , and so on.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char c;
    for(i = 1;i < 7;i++)
    {
        for(c = 'F';'F' - c < i;c--)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}
