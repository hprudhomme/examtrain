#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_put_nbr(char *s)
{   
    unsigned int nb;
    int i = 0;
    int res = 0;

    while (s[i])
    {
         res = res * 10 + (s[i] - 48);
        i++;
    }
    printf("res = %d\n", res);
    return res;
}

void    ft_to_hex(int nbr)
{   
    char base[] = "0123456789abcdef";
    if (nbr >= 10)
        ft_to_hex(nbr / 16);
    ft_putchar(base[nbr % 16]);
}

void    ft_hex(char *s)
{   
    long int nbr = ft_put_nbr(s);
    ft_to_hex(nbr);
}

int     main(int argc, char **argv)
{   
    if (argc != 2)
    {
        return 0;
    }
    if (argc == 2)
    {
        ft_hex(argv[1]);
    }
    ft_putchar('\n');
    return 0;
}

