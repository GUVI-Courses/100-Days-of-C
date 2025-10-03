#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n -----pointers----\n");

    char a = 'A';
    char *ptr = &a ;

    printf("1 | %c, %c, %u\n ", a, *ptr, ptr);

    char b = 'B';
    ptr = &b;
    printf("2 | %c, %c, %u\n ", b, *ptr, ptr);

    *ptr = 'C';
    printf("3 | %c, %c, %u\n ", b, *ptr, ptr);

    (*ptr)++;
    printf("4 | %c, %c, %u\n ", b, *ptr, ptr);

    unsigned x = 'A';
    ptr = (char*)&x;
    printf("5 | %u, %c, %u\n ", x, *ptr, &x);

    unsigned y = 'B';
    ptr = (char*)&y ;
    printf("6 | %u, %c, %u\n ", y, *ptr, &y);

    *ptr = 'C';
    printf("7 | %u, %c, %u\n ", y, *ptr, &y);

    (*ptr)++;
    printf("8 | %u, %c, %u\n ", y, *ptr, &y);

    x = 0xABCD1234;
    ptr = (char *)&x;
    printf("9 | %X, %X, %c\n ", x, *ptr, *ptr);

    *ptr = 'C';
    printf("10 | %X, %X, %X, %c\n ", x, x, *ptr, *ptr);
    
    unsigned *uint_ptr = (unsigned *)ptr;
    *uint_ptr = 'C';
    printf("11 | %u, %X, %X, %c\n ", x, x, *ptr, *ptr);
    
}