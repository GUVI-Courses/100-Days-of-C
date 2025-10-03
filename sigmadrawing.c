#include <stdio.h>
#include <stdlib.h>

/*Sigma Drawing
print this drawing

xxxxxxxxxx
 x
  x
   x
    x
     x
    x
   x
  x
 x
xxxxxxxxxx

base width   = 10
tip width    = 5
total height = 11
*/

int main ()
{
    printf("\n=== Sigma Drawing ===\n\n");

    const char symbol = 'x';
    const int Base_Width = 10;
    const int Tip_Width = 5;

    for( int i = 0; i< Base_Width; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");

    for(int i = 1; i<Tip_Width; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n",symbol);
    }
    for(int i = Tip_Width; i>0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("%c\n",symbol);
    }
    for( int i = 0; i< Base_Width; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");


    
}