#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char my_string[] = "I love programming in C!" ;
    printf("The string: \"%s\"n", my_string);

    // string length
    int i;
    for(i = 0 ; my_string[i] != '\0' ; i++);
    printf("\nString lenth(manual method) : %d\n", i);
    printf("Size of string: %d\n", sizeof(my_string));

    //string lenth : built in method
    printf("String lenth(built in): %d\n", strlen(my_string));

}