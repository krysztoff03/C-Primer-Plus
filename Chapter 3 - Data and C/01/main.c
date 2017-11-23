
/*
* Find out what your system does with integer overflow, floating-point overflow, and
* floating-point underflow by using the experimental approach; that is, write programs
* having these problems. (You can check the discussion in Chapter 4 of limits.h and
* float.h to get guidance on the largest and smallest values.)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j+1, j+2);

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);

    float toosmall = 0.1234E-10 / 10;
    printf("%e\n", toosmall);
    return 0;
}
