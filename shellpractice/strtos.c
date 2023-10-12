#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * strtab - Split string into an array of strings
 * @str: String to split
 *
 * Return: Pointer to array of strings
 */
char **strtab(char *str)
{
    char **astr = NULL;
    char *word;
    int i = 0;

    if (str == NULL)
        return NULL;

    // Allocate memory for the initial array of pointers
    astr = (char **)malloc(sizeof(char *));
    if (astr == NULL)
    {
        return NULL;
    }

    word = strtok(str, " ");
    while (word != NULL)
    {
        // Reallocate memory for the array of pointers
        astr = (char **)realloc(astr, (i + 1) * sizeof(char *));
        if (astr == NULL)
        {
            return NULL;
        }

        // Allocate memory for the individual string and copy it
        astr[i] = (char *)malloc(strlen(word) + 1);
        if (astr[i] == NULL)
        {
            return NULL;
        }
        strcpy(astr[i], word);

        i++;
        word = strtok(NULL, " ");
    }

    // Don't forget to terminate the array with a NULL pointer
//    astr = (char **)realloc(astr, (i + 1) * sizeof(char *));
  //  if (astr == NULL)
   // {
     //   return NULL;
   // }
    astr[i] = NULL;

    return astr;
}
