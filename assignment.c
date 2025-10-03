#include <stdlib.h>
#include <stdio.h>

int main()
{
    int a , b =3;
    printf("b = %d\n",b);

    a = b ;
    printf("a = b  --> a = %d\n",a);

    a += b ;
    printf("a += b  --> a = %d\n",a);

    a -= b ;
    printf("a -= b  --> a = %d\n",a); 

    a *= b ;
    printf("a *= b  --> a = %d\n",a);

    a /= b ;
    printf("a /= b  --> a = %d\n",a);

    a %= b ;
    printf("a %%= b  --> a = %d\n",a);

}