#include "../h/my_string.h"

int my_split(char *str, const char *delimeter, char **array)
{
    char *token;
    str[strlen(str) - 1] = '\0';
    int count = 0;
    token = strtok(str, delimeter);
    while (token != NULL)
    {
        array[count++] = strdup(token);
        token = strtok(NULL, delimeter);
    }
    array[count] = NULL;
    return count;
}