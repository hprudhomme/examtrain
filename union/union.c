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

int  ft_is_double(char *s, char c, int x)
{   
    x = x - 1;
    while (x >= 0)
    {
        if (s[x] == c)
            return 1;
        x--;
    }
    return 0;
}

int     ft_is_double_s1_s2(char *s1, char c)
{
    int i = 0;
    while (s1[i])
    {
        if (s1[i] == c)
            return (1);
        i++;
    }
    return 0;
}

void    ft_union(char *s1, char *s2)
{   
    int i = 0;
    int j = 0;

    while (s1[i])
    {   
        if (!(ft_is_double(s1, s1[i], i)))
            ft_putchar(s1[i]);
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (!(ft_is_double(s2, s2[i], i)) && !(ft_is_double_s1_s2(s1, s2[i])))
            ft_putchar(s2[i]);
        i++;
    }
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
        ft_union(argv[1], argv[2]);
    }
    ft_putchar('\n');
    return 0;
}