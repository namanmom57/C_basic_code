/******************************************************************************
Auther : Naman Patel
Description : dangling pointer problem understanding.
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
