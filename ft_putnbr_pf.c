#include "printf.h"

void ft_putchar_pf(char c, size_t *counter);

static void ft_putunsigned_recursive(unsigned int num, size_t *counter)
{
    if (num > 9)
        ft_putunsigned_recursive((num/10), counter);
    ft_putchar_pf('0' + (num % 10), counter);
}

void ft_putnbr_pf(int num, size_t *counter)
{
    unsigned int n;

    if (num < 0)
    {
        n = (unsigned int)(-num);
        ft_putchar_pf('-', counter);
    }
    else
        n = (unsigned int)num;

    ft_putunsigned_recursive(n, counter);

}