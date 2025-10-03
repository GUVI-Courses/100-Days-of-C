#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define Array_Len 100
#define CALC_ARRAY_LEN(x) (sizeof(x) / sizeof(x[0]))
#define MAX(a,b) (a > b ? a : b)

int main()
{
    printf("\n-----------Understanding Macros-----\n");

    double array[Array_Len];
    printf("Array length is : %d",Array_Len);

#undef Array_Len
#define Array_Len 99

    printf("\nArray length is : %d",Array_Len);

    printf("\nSource file: \"%s\",%d\n", __FILE__, __LINE__);
    printf("\nCompilation time: %s\n", __TIME__);

    int array_len = CALC_ARRAY_LEN(array);
    printf("Array length is : %d ",array_len);

    int a = -1, b = 5;
    printf("\nMAX(%d, %d) : %d\n", a,b,MAX(a,b));
    int b_before = b;
    printf("\nMAX(%d, %d) : %d\n", a,b_before,MAX(a,b++));
    printf("b before increment : %d\n", b_before);
    printf("b after incremen: %d\n",b);
}