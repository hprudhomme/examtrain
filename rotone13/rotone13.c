#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_rotone(char *s)
{   
    int i = 0;

    while (s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
            ft_putchar(s[i] + 13);
        else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
            ft_putchar(s[i] - 13);
        else
            ft_putchar(s[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc != 2)
        ft_putchar('\n');
    else
    {
        ft_rotone(argv[1]);
    }
    return 0;
}