#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUF_SIZE 100

void clear_stdin()
{
    int c = ' ';
    while(c != '\n' && c!= EOF)
    {
        c = getchar();
    }
}

int get_line(char dst[], int size)
{ 
    char buffer[BUF_SIZE];
    int i;
    for(i = 0; i < size - 1; i++)
    {
        int c = getchar();
        if(c == '\n' || c == EOF)
        {
            break;
        }
        else{
            dst[i] = (char)c;
        }
    }
    if (i == size - 1)
    {
        clear_stdin();
    }
    dst[i] = '\0';
    return i ;
}

int main()
{
    printf("\n-----Get the line----\n\n");

    char buffer[BUF_SIZE];

    do
    {
        printf("Enter a line:\n");
        int n = get_line(buffer, BUF_SIZE);
        printf("[%d] %s\n", n, buffer);
        
    } while (strcmp(buffer, "END"));
    
}