#include "ft_printf.h"


void ft_diff(char *ch, size_t *counter, va_list arg)
{
    if (*ch == 'c')
        ft_putchar_pf(va_arg(arg, int), counter);
    else if (*ch == 's')
        ft_putstr_pf(va_arg(arg, char*), counter);

    
}

int ft_printf(const char *ch, ...)
{
    va_list arg;
    size_t counter;

    if (!ch)
        return (0);
    counter = 0;
    va_start(arg, ch);
    while (*ch)
    {
        if (*ch == '%' && *(ch + 1))
        {
            ch++;
            ft_diff((char *)ch, &counter, arg);
        }
        else
            ft_putchar_pf(*ch, &counter);
        ch++;
    }
    va_end(arg);
    return (counter);
}

