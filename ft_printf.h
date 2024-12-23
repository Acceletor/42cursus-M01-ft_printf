#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

# define HEX_UPPER_BASE "0123456789ABCDEF"
# define HEX_LOWER_BASE "0123456789abcdef"

int ft_printf(const char *format, ...);

void    ft_putchar_pf(char c, size_t *count);
void    ft_diff(char *format, size_t *counter, va_list arg);




#endif
