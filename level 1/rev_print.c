/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

#include <unistd.h>
int main(int argc, char **argv)
{
    int len = ft_strlen(argv[1]);
    if(argc == 2)
    {
        while (len - 1 >= 0)
        {
            write(1, &argv[1][len - 1], 1);
            len--;
        }
    }
    write (1, '\n', 1);
}