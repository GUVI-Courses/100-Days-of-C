#include <stdlib.h>
#include <stdio.h>

#define SIZE 30

int main()
{
    char text[SIZE];
    int index;
    printf("Enter the string Value\n");
    fgets(text, SIZE, stdin);
    printf("Entered String Value is %s\n",text);

    for(index = 0; text[index] != '\0'; index++)
    {
        if(text[index] >= 'A' && text[index] <= 'Z')
        {
            text[index] = text[index] + 32;
        }else if(text[index] >= 'a' && text[index] <='z')
        {
            text[index] = text[index] - 32;
        }
    }
    printf("String After Toggling is %s", text);
    return 0;
}