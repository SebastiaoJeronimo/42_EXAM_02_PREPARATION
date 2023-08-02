/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

int	ft_strlen(char *str){
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main()
{
    printf("this string has the lenght of %d\n", ft_strlen("DUHDH"));
}