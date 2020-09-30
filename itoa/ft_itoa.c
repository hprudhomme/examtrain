#include <stdio.h>
#include <stdlib.h>

int     ft_str_len(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return i;
}

char    *ft_strrev(char *tab)
{   
    int i = -1;
    int j = ft_str_len(tab);
    char t;

    while (++i < --j)
    {
        t = tab[i];
        tab[i] = tab[j];
        tab[j] = t;
    }
    return (tab);
}

char	*ft_itoa(int nbr)
{
    int i;
    int n;
    char *tab;

    if (!(tab = malloc(sizeof(char) * 12)))
        return NULL;
    if (nbr == -2147483648)
        return ("-2147483648");
    if (nbr == 0)
        return ("0");
    n = 0;
    if (nbr < 0)
    {
        n = 1;
        nbr *= -1;
    }
    i = 0;
    while (nbr)
    {   
        tab[i] = (nbr % 10) + '0';
        nbr /= 10;
        i++;
    }
    if (n)
        tab[i] = '-';
    return (ft_strrev(tab));
}

int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}