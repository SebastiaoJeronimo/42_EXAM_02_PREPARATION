/**
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
 */

#include <unistd.h>

int main(int argc, char **argv)
{
    int loop = 0;
    int j = 0;
    char c;
    if (argc == 2)
    {
        while (argv[1][j])
        {
            c = argv[1][j];
            if ((c >= 'a' &&  c <= 'z') || (c >= 'A' &&  c <= 'Z'))
            {
                if (c >= 'A' &&  c <= 'Z')
                    loop = c - ('A'- 1);
                if (c >= 'a' &&  c <= 'z')
                    loop = c - ('a'- 1);
                while(loop)
                {
                    writes(1, &c, 1);
                    loop--;
                }
            }else{
                writes(1, &c, 1);
            }
            j++;
        }
    }
    write (1, '\n', 1);
}


