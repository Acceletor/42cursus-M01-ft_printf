#include "ft_printf.h"

void ft_putptr_pf(void *ptr, size_t *counter)
{
    char *str;
    unsigned long ptr_address;

    ptr_address = (unsigned long)ptr;
    ft_putstr_pf("0x", counter);
    str = ft_convert_pf(ptr_address, HEX_LOWER_BASE);
    ft_putstr_pf(str, counter);
    free (str);
}
