#include <unistd.h>
#include <stdio.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_str_len(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return i;
}

int     ft_lastchar(char *str)
{   
    int str_len = ft_str_len(str) - 1;
    while (str[str_len] == ' ' || str[str_len] == '\t')
        str_len--;
    return str_len;
}

void    ft_expand(char *str)
{
    int i = 0;
    int c = 0;
    int last_char;
    last_char = ft_lastchar(str);
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] && (i <= last_char))
    {
        if ((str[i] == ' ' || str[i] == '\t') && c != 1)
        {
            ft_putchar(' ');
            ft_putchar(' ');
            ft_putchar(' ');
            c = 1;   
        }
        if ((str[i] != ' ' && str[i] != '\t'))
        {
            ft_putchar(str[i]);
            c = 0;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {   
        ft_putchar('\n');
    }
    if (argc == 2)
    {   
        ft_expand(argv[1]);
    }
    return 0;
}