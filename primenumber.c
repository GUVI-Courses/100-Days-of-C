#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Goals
Find all prime numbers below a given upper limit
Find the first prime number above a given lower limit
Write some dummy cleanup code before the final retur 
Define constant MAX equal to 1000
If user give an upper limit lower than 2 or greater than MAX immediately
execute the cleanup code and exit the program
Same check for the lower limit */

int main()
{
    printf("\n=== Prime Numbers ===\n\n");

    const int MAX = 1000 ;
    /* Find all the prime numbers below upperlimit*/
    int upperLimit ; 
    printf("Enter the upper limit : ");
    scanf("%d", &upperLimit);
    if(upperLimit < 2 || upperLimit > MAX)
    {
        printf("error : must be 2 < limit < MAX\n");
        /*cleanup and exit*/
        goto exit_program;
    }

    printf("Prime numbers up to %d: \n",upperLimit);

    for(int number = 2; number < upperLimit; number++)
    {
        bool isPrime = true;
        for( int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            printf("%d\n", number);
        }
    }

    /*Find the first prime number above lowerlimit*/

    int lowerLimit;
    printf("Enter the lower Limit ");
    scanf("%d", &lowerLimit);
    if(lowerLimit < 2 || lowerLimit > MAX)
    {
        printf("Error : must be 2 < limit < Max\n");
        goto exit_program;
    }

    int firstPrimeNumber = -1;
    /*search*/
    for (int number = lowerLimit; number< MAX; number++)
    {
        bool isPrime = true;
        for( int i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            firstPrimeNumber = number;
            break;
        }
    }

    if(firstPrimeNumber == -1)
    {
        printf("CAnnot find the prime numbers above %d\n", lowerLimit);
    }
    else
    {
        printf("The first prime number above %d is %d\n", lowerLimit, firstPrimeNumber);
    }



exit_program:
    printf("\n--------------------------\n");
    printf(" Some dummy cleanup code......");
}