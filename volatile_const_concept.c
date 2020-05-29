/******************************************************************************
    Auther : Naman Patel
    
    -> volatile will tell the compiler not to optimise code related the variable, 
	usually when we know it can be changed from "outside", e.g. by another thread.

	-> const will tell the compiler that it is forbidden for the program to modify the variable's value.      

*******************************************************************************/
#include <stdio.h>
void update_data( int *data );

int main()
{
    // we can declred const volatile variable
    const volatile int data = 0;
    
    printf("data : %d\r\n",data);
    
    // we can change data by pass by address
    update_data(&data);

    printf("data : %d\r\n",data);

    return 0;
}

void update_data( int *data )
{
    *data = 10;
}
