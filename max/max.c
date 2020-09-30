#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = 0;

    while (i < len)
    {   
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return max;
}

int main()
{
    int tab[6];
    tab[0] = 3;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 120;
    tab[4] = 8;
    tab[5] = 65;

    printf("%d\n", max(tab, 6));
}