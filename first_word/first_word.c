#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_first_word(char *s)
{   
    int i = 0;
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (s[i] && s[i] != ' ' && s[i] != '\t')
        {
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
        ft_first_word(argv[1]);
    }
    return 0;
}