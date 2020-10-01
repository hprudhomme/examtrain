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

void	print_reverse(char *str)
{
	// let's use three pointers to traverse the string backwards
	// the fast pointer will, dah, move faster then the others
	// mainly:
	int index;	// will be placed at the start of a word
	int start;	// will be placed at the end of a word
	int end;	// will traverse the current word so we can write to stdout

	// shall we start at the end of the string
	index = str_length(str) - 1;
	end = index;
	start = index;

	// until we reach the beginning of the string
	while (index >= 0)
	{   
		while (iswhitespace(str[index]))
            index--;
        end = index;
        while (index >= 0 && !iswhitespace(str[index]))
            index--;
        index++;
        start = index;
        while (start <= end)
        {
            ft_putchar(str[start]);
            start++;
        }
        index -= 1;
        if (index > 0)
            ft_putchar(' ');
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_reverse(av[1]);
	write(1, "\n", 1);
	return (1);
}