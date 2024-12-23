#include "ft_printf.h"

void    ft_putchar_pf(char c, size_t *count)
{
    write(1, &c, 1);
    (*count)++;
}