/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int wc = 0;
    char **words;
    //second loop
    int first = 0;
    int last = 0;
    int n_words = 0;
    //aux 
    int aux = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while(str[i] && !(str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
    }
    words = (char **) malloc((wc +1) *sizeof(char*));
    i = 0;
    while(str[i]) 
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        first = i;
        while(str[i] && !(str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        last = i -1;
        words[n_words] = (char *) malloc ((last+1)-first + 1);
        words[n_words][(last+1)-first] = '\0';
        aux = 0;
        while (aux < (last+1)-first) 
        {
            words[n_words][aux] = str[aux + first];
            aux++;
        }
        n_words++;
    }
    words[n_words] = NULL;
    return words;
}



void print_split_words(char **words) {
    if (words == NULL) {
        printf("Split words array is NULL.\n");
        return;
    }

    int i = 0;
    while (words[i] != NULL) {
        printf("%s\n", words[i]);
        i++;
    }
}

int main() {
    char str[] = "This is a test string for ft_split function";
    char **split_words = ft_split(str);

    printf("Original string:\n%s\n\n", str);
    printf("Split words:\n");
    print_split_words(split_words);

    // Remember to free allocated memory for each split word and the array itself.
    int i = 0;
    while (split_words[i] != NULL) {
        free(split_words[i]);
        i++;
    }
    free(split_words);

    return 0;
}
