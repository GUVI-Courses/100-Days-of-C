#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter A operand (int) :");
    scanf("%f",&a);

    printf("Enter B operand (int) :");
    scanf("%f",&b);
    printf("\n");

    c = a+b;
    printf("c = a+b ---> %f\n",c);

    c = a-b;
    printf("c = a-b ---> %f\n",c);

    c = a*b;
    printf("c = a*b ---> %f\n",c);

    c = a/b;
    printf("c = a/b ---> %f\n",c);

    //c = a%b;
    //printf("c = a%% b ---> %d\n",c);

    printf("Calculator Completed");

}