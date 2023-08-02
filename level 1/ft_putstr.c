/*Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);*/

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write(1, &str[i],1);
        i++;
    }
}

//MAIN NOT NECESSARY JUST DID IT FOR TESTING
int main()
{
    char *str = "string";
    ft_putstr(str);
    return (0);
}