/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksuebtha <ksuebtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:23:23 by ksuebtha          #+#    #+#             */
/*   Updated: 2025/01/10 14:31:24 by ksuebtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static void	ft_diff(char *ch, size_t *counter, va_list arg)
{
	if (*ch == 'c')
		ft_putchar_pf(va_arg(arg, int), counter);
	else if (*ch == 's')
		ft_putstr_pf(va_arg(arg, char*), counter);
	else if (*ch == 'p')
		ft_putptr_pf(va_arg(arg, void *), counter);
	else if (*ch == 'd' || *ch == 'i')
		ft_putnbr_pf(va_arg(arg, int), counter);
	else if (*ch == 'u')
		ft_putuint_pf(va_arg(arg, unsigned int), counter, "0123456789");
	else if (*ch == 'x')
		ft_putuint_pf(va_arg(arg, unsigned int), counter, HEX_LOWER_BASE);
	else if (*ch == 'X')
		ft_putuint_pf(va_arg(arg, unsigned int), counter, HEX_UPPER_BASE);
	else if (*ch == '%')
		ft_putchar_pf(*ch, counter);
}

int	ft_printf(const char *ch, ...)
{
	va_list	arg;
	size_t	counter;

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

