/*******************************************************************************
 * Little and big endian are two ways of storing multibyte data-types ( int, float, etc). 
 * In little endian machines, last byte of binary representation of the multibyte data-type
 * is stored first. On the other hand, in big endian machines, first byte of binary 
 * representation of the multibyte data-type is stored first.
 * ****************************************************************************/
#include <stdio.h>

void find_little_or_big(void)
{
    unsigned int i = 1u;
    char *c = (char*)&i;
    if (*c == 1)
    {
        printf("Little endian\r\n");
    } 
    else 
    {
    	printf("Big endian\r\n");
    }

}

int main(void)
{
    find_little_or_big();
    return 0;
}


