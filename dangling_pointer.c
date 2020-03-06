/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *test_p = NULL;
    test_p = (char *)malloc(50);
    printf("address : %d\r\n",test_p);
    free(test_p);
    test_p = NULL;  // this is used for avoid dangling pointer problem
    printf("address : %d\r\n",test_p);
    return 0;
}
