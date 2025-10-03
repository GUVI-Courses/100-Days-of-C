#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//strchr
//^  ^  ^`
//task 1 - find the occurences of character in string
// task 2 - find a string inside a string
int find_all_occurences(char str[], char c, int indexes[])
{
    int found = 0;
    char *pstr = str;

    do
    {
        pstr = strchr(pstr,c);
        if(pstr)
        {
            indexes[found++] = pstr - str;
            pstr++ ; 
        }
    } while (pstr);
    return found;  
}

void print_occurrences(char str[], int occurrences_indexes[], int found)
{
    char pattern[strlen(str) + 1];
    memset(pattern, ' ', sizeof(pattern));
    for(int i = 0; i<found;i++)
    {
        pattern[occurrences_indexes[i]] = '^';
    }
    pattern[sizeof(pattern) - 1] = '\0';
    printf("%s\n",str);
    printf("%s\n",pattern);
}
// return -1 if sub isnt in str OR the starting index of sub in str
int find_substring(char str[], char sub[])
{
    char *psub = strstr(str, sub);
    
    return psub ? (int)(psub - str) : -1;

}

void print_substring(char str[], char sub[], int index)
{
    printf("Find substring\"%s\":\n", sub);
    printf("%s\n", str);
    if(index >= 0)
    {
        for(int i = 0 ; i<index + strlen(sub); i++)
        {
            printf("%c", i < index ? ' ' : '-');
        }
    }
}

int main()
{
    printf("Searching and Tokenization in strings!\n");

    char str[] = "This is a simple string";
    int occurrences_indexes[sizeof(str)];
    int found = find_all_occurences(str,'i',occurrences_indexes);
    print_occurrences(str, occurrences_indexes, found);

    char substring[] = "ring";
    int index = find_substring(str, substring);
    print_substring(str, substring, index);
}