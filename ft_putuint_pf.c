#include "ft_printf.h"

void ft_putuint_pf(unsigned int num, size_t *counter, char *base)
{
    char *str;

    str = ft_convert_pf(num, base);
    ft_putstr_pf(str, counter);
    free(str);
}