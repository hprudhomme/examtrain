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

void    ft_epur(char *s)
{
    int i = 0;
    int len = ft_str_len(s) - 1;

    while (s[len] == ' ' || s[len] == '\t')
        len--;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (i <= len)
    {
        ft_putchar(s[i]); 
        i++;
    }
}

int     main(int argc, char **argv)
{   
    if (argc != 2)
    {
        return 0;
    }
    if (argc == 2)
    {
        printf("bon");
        ft_epur(argv[1]);
    }
    ft_putchar('\n');
    return 0;
}