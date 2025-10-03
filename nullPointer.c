#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("\n-----NULL POINTERS----\n");

    
    int *ptr = NULL;
    if(ptr)
    {
        printf(" 1 | Pointed value : %d\n", *ptr);
    }

    int someValue = 123;

    if(!ptr)//if(ptr == NULL)
    {
        ptr = &someValue;
        printf(" 2 | Pointed value : %d\n", *ptr);
    }

    
}