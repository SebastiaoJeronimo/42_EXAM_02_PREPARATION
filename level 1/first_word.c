/* Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$> */

#include <unistd.h>
int main(int argc,char **argv){
    int j = 0;
    //check if the function has exactly one argument
    if (argc == 2)
    {
        //space corresponds to 32 in the ascii table 
        //tab (horizontal tab HT) corresponds to 9 in the ascii table
        //skip the spaces and the tabs on the beggining
        while (argv[1][j] == 9 || argv[1][j] == 32) 
            j++;
        //while the string hasnt reach the end and the caracter is not a space or a tab print the caracter
        while (!(argv[1][j] == 9 || argv[1][j] == 32) && argv[1][j])
            write(1, &argv[1][j++], 1);
    }
    write(1, "\n", 1);
}