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

void    ft_hidden(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int len = ft_str_len(s1);

    while (s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    if (i == len)
        ft_putchar('1');
    else
        ft_putchar('0');
}

int     main(int argc, char **argv)
{   
    if (argc != 3)
    {
        return 0;
    }
    if (argc == 3)
    {
        printf("bon");
        ft_hidden(argv[1], argv[2]);
    }
    ft_putchar('\n');
    return 0;
}