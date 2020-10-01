#include <unistd.h>
#include <stdio.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int		str_length(char *str)
{
	int	len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int		iswhitespace(char chr)
{
	return (chr == ' ' || chr == '\t');
}

void    ft_rostring(char *str)
{
    int i = 0;
    int w = 0;

    while(iswhitespace(str[i]))
        i++;
    while (str[i] != '\0' && !(iswhitespace(str[i])))
        i++;
    while(iswhitespace(str[i]))
        i++;
    while (str[i])
    {
        if (iswhitespace(str[i]) && !(iswhitespace(str[i + 1])))
            ft_putchar(' ');
        if (!(iswhitespace(str[i])))
            {
                ft_putchar(str[i]);
                w = 1;
            }
        i++;
    }
    i = 0;
    while(iswhitespace(str[i]))
        i++;
    if (w)
        ft_putchar(' ');
    while (str[i] != '\0' && !(iswhitespace(str[i])))
    {
        ft_putchar(str[i]);
        i++;
    }
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_rostring(av[1]);
	write(1, "\n", 1);
	return (1);
}