
#include<unistd.h>

void ft_putchar(char c);

void    alt(int x, int y)
{
    int    a;
    int    b;

    a = x;
    b = y;
    if (x > 0)
    {
        ft_putchar('C');
    }
    while (a - 2 > 0)
    {
        ft_putchar('B');
        a--;
    }
    if (x > 1)
    {
        ft_putchar('A');
    }
}

void orta(int    x, int    y)
{
    int a;
    int b;

    a = x;
    b = y;
    while(b - 2    > 0)
    {
        ft_putchar('B');
        a = x;
        while(a - 2 > 0)
        {
            ft_putchar(' ');
            a--;
        }
        ft_putchar('B');
        ft_putchar('\n');
        b--;
    }
    alt(x, y);
}

void    rush(int x, int y)
{
    int a;
    int b;

    a = x;
    b = y;
    if(x > 0)
    {
        ft_putchar('A');
    }
    while(a - 2 > 0)
    {
        ft_putchar('B');
        a--;
    }
    if(x > 1)
    {
        ft_putchar('C');
    }
    if(y > 1)
    {
        ft_putchar('\n');
        orta(x, y);
    }
}
