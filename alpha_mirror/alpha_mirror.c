#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     get_index(char *b1, char c)
{
    int i = 0;

    while (b1[i])
    {
        if (b1[i] == c)
            return i;
        i++;
    }
    return 0;
}

void    ft_mirror(char *s)
{
    int i = 0;
    int x;
    char b1[] = "abcdefghijklmnopqrstuvwxyz";
    char b2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            x = get_index(b1, s[i]) + 1;
            ft_putchar(b1[26 - x]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            x = get_index(b2, s[i]) + 1;
            ft_putchar(b2[26 - x]);
        }
        else
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
        ft_mirror(argv[1]);
    }
    ft_putchar('\n');
    return 0;
}