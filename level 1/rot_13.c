/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$> */

#include <unistd.h>

int main(int argc, char **argv)
{
    int j;
    char c;
    int shift;

    j = 0;
    if (argc == 2)
    {
        while(argv[1][j])
        {
            c = argv[1][j];
            if ((c >= 'a' && c <= 'z')||(c>= 'A' && c <= 'Z'))
            {
                if((c >= 'a' && c <= 'z'))
                {
                    if(c >= 'n')
                    {
                        shift = 'z' - c;
                        c = 'a' + (13 - shift);
                    }else{
                        c = c + 13;
                    }
                }
                if((c >= 'a' && c <= 'z'))
                {
                    if(c >= 'n')
                    {
                        shift = 'z' - c;
                        c = 'a' + (13 - shift);
                    }else{
                        c = c + 13;
                    }
                }
            }else {
                write (1, &c ,1);
            }
            j++;
        }
    }
    write (1, '\n', 1);
}