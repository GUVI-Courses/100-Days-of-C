#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024
#define LOG_INFO

int main()
{
    printf("\n-------Conditinal Compilation---\n\n");

#ifdef SOME_MACRO
    printf("Some macro exists\n");
#endif

#ifdef LOG_INFO
    printf("This is an INfo\n");
#else
    printf("I shouldnt log\n");
#endif

#if defined BUFFER_SIZE && BUFFER_SIZE > 2048
    printf("The buffer is huge , do something\n");
#elif defined BUFFER_SIZE
    printf("The buffer is ok\n");
#else 
    printf("You forgot to define buffer size\n");
#endif
}