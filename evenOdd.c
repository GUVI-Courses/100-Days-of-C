#include <stdio.h>
#include <stdlib.h>
// if divisible by 2 without any remainder -- even 

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is EVEN \n",num);
    }
    else{
        printf("%d is ODD \n",num);
    }
    return 0;
}