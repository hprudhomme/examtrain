#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{   
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     ft_str_len(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return i;
}

char    **ft_second_malloc(char *str, char **tab)
{   
    int i = 0;
    int c = 0;
    int x = 0;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    --i;
    while (str[++i])
    {   
        if ((str[i] == ' ' || str[i] == '\t') && !(str[i - 1] == ' ' || str[i - 1] == '\t') && i != 0)
            {   
                if (!(tab[x] = malloc(sizeof(char) * (c + 1))))
                    return NULL;
                x++;
                c = 0;
            }
        if (!((str[i] == ' ' || str[i] == '\t')))
            c++;
    }
    if (!(tab[x] = malloc(sizeof(char) * (c + 1))))
		return (NULL);
    return (tab);
}

char    **ft_first_malloc(char *str, char **tab)
{   
    int i = 0;
    int c = 0;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    i--;
    while (str[++i])
    {   
        if ((str[i] == ' ' || str[i] == '\t') && !(str[i - 1] == ' ' || str[i - 1] == '\t') && i != 0)
            c++;
    }
    if (!(tab = malloc(sizeof(char*) * (c + 2))))
        return NULL;
    return (tab);
}

char   **ft_rev_wstr(char *str)
{
    char	**tab;
	tab = NULL;
	if ((tab = ft_first_malloc(str, tab)) == NULL)
		return (NULL);
	if ((tab = ft_second_malloc(str, tab)) == NULL)
		return (NULL);
    int lignes = 0;
    int i = 0;
    int x = 0;
    int y = -1;
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    --i;
    while (str[++i])
    {   
        if ((str[i] == ' ' || str[i] == '\t') && !(str[i - 1] == ' ' || str[i - 1] == '\t') && i != 0)
        {   
            tab[x][++y] = '\0';
			x++;
			y = -1;
        }
        if (!((str[i] == ' ' || str[i] == '\t')))
        {   
            tab[x][++y] = str[i];
        }
    }
    tab[x + (y != -1)] = NULL;
    int z = 0;
    while (tab[z])
	{
        z++;
	}
    z--;
    while (z >= 0)
    {
        ft_putstr(tab[z]);
        if (z)
            ft_putchar(' ');
        z--;
    }
    return (tab);
}

int     main(int argc, char **argv)
{   
    if (argc != 2)
    {
        return 0;
    }
    if (argc == 2)
        ft_rev_wstr(argv[1]);
    ft_putchar('\n');
    return 0;
}