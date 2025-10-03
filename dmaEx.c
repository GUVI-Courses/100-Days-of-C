#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*
Goals : 
- don’t use scanf!
- acquire a string up to the newline character
always put a null character at the end of the buffer
-return a newly allocated buffer containing the entire input string
- if given, store the length of the input string in plen
- plen may be NULL
- return NULL if an error occurs
- implement a main loop that asks the user to insert a line, acquire it and print I
- terminate the main loop when the user enters "END“
- in the main loop manage the allocated buffer
*/

char *get_line_alloc(int *plen)
{
    if(!plen) //same as if (plen == NULl)
    {
        //the user doent care about the length
        plen = malloc(sizeof(*plen));
        if (plen)
        {
            //cannot allocate memory .... failure!
            return NULL;
        }
    }
    *plen = 0;

    char *line = NULL;
    int buffer_size = 0,input;
    const int alloc_block_size = 5;

    while(true)
    {
        input = getchar();

        if(buffer_size <= *plen)
        {
            //resize the memory block
            buffer_size += alloc_block_size;
            char *realloc_line = realloc(line, buffer_size);

            if(!realloc_line)
            {
                //cannot do reallocation ... failure 
                free(line);
                return NULL;
            }

            //rellocation done!!
            line = realloc_line;
        }
        if(input != '\n' && input != EOF)
        {
            line[(*plen)++] = (char)input;
        }
        else{
            break;
        }
    }
    line[*plen] = '\0';
    return line;
}

int main()
{
    printf("\nLet get the line dynamically!");

    char *line = NULL;
    int len;

    do
    {
        printf("Enter a line(End to quit): \n");

        free(line);
        line = get_line_alloc(&len);

        if(line)
        {
            printf("%s (len=%d)\n", line, len);
        }
        else{
            printf("Cannot allocate memory\n");
        }

    } while (line && strcmp(line ,"END"));
    
}