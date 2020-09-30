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

void    ft_last_word(char *s)
{
    int str_len = ft_str_len(s) - 1;

    while (s[str_len] == ' ' || s[str_len] == '\t')
        str_len--;
    if (s[str_len] == ' ' || s[str_len] == '\t')
        str_len--;
    while (s[str_len] != ' ' && s[str_len] != '\t' && str_len != -1)
        str_len--;
    str_len++;
    while (s[str_len] != '\0' && s[str_len] != ' ' && s[str_len] != '\t')
    {
        ft_putchar(s[str_len]);
        str_len++;
    }
}

int     main(int argc, char **argv)
{   
    if (argc != 2)
    {
        return 0;
    }
    if (argc == 2)
        ft_last_word(argv[1]);
    ft_putchar('\n');
    return 0;
}