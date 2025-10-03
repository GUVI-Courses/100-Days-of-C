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

    //strcpy strncpy
    char another_string[] = "programming is funny!";
    printf("Before copy : \"%s\"\n", my_string);
    printf("After copy :\"%s\"\n",strcpy(my_string,another_string));

    char another_long_string[] = "This is a dummy verry very long string...";
    printf("Before copy : \"%s\"\n", my_string);
    printf("After copy :\"%s\"\n",strncpy(my_string,"Hello",3));
    printf("Before copy : \"%s\"\n", my_string);
    printf("After copy :\"%s\"\n",strncpy(my_string,"Hello",sizeof(my_string)));
    printf("Before copy :\"%s\"\n",my_string);
    strncpy(my_string, another_long_string,sizeof(my_string));
    my_string[sizeof(my_string)-1] ='\0';
    printf("After copy :\"%s\"\n",my_string);

// >0 first string is greater, -ve second is greater, 0 both are same
    char str_1[] = "abcd";
    char str_2[] = "abcdaaaaa";

    printf("strcmp %s, %s :%d\n", str_1,str_2, strcmp(str_1,str_2));
    printf("strncmp %s, %s :%d\n", str_1,str_2, strncmp(str_1,str_2,3));
}