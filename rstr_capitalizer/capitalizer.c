#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_capitalizer(char *str)
{   int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0'))
            ft_putchar(str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z' && str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0')
            ft_putchar(str[i] + 32);
        else
            ft_putchar(str[i]);
        i++;
    }
    ft_putchar('\n');
}


int main(int argc, char **argv)
{
    int  i = 1;

    if (argc < 2)
        ft_putchar('\n');
    else
    {   
        while (i < argc)
        {
            ft_capitalizer(argv[i]);
            i++;
        }
    }
    return 0;
}