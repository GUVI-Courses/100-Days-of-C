#include <stdio.h>
#include <stdlib.h>

//12.7 - 12 = 0.7
//data [ floating point type ] -- 12.7
// 0.7

int main()

float data;
printf("Enter the floating point variable :");
scanf("%f", &data);
printf("The integer part = %d \n", (int)data);

printf("the decimal part = %.2f \n", data - (int)data);

return 0;