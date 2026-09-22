/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 21:29:54 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/22 06:46:34 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int n)
{
	long	v;
	int		len;
	int		r;

	v = n;
	len = 0;
	if (v < 0)
	{
		if (ft_putchar('-') < 0)
			return (-1);
		len = 1;
		v = -v;
	}
	r = ft_putnbr_base((unsigned long)v, "0123456789");
	if (r < 0)
		return (-1);
	return (len + r);
}

static int	ft_conv(char conv, va_list *ap)
{
	if (conv == 'c')
		return (ft_putchar((char)va_arg(*ap, int)));
	if (conv == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (conv == 'p')
		return (ft_putptr(va_arg(*ap, void *)));
	if (conv == 'd' || conv == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (conv == 'u')
		return (ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789"));
	if (conv == 'x')
		return (ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789abcdef"));
	if (conv == 'X')
		return (ft_putnbr_base(va_arg(*ap, unsigned int), "0123456789ABCDEF"));
	if (conv == '%')
		return (ft_putchar('%'));
	if (ft_putchar('%') < 0 || ft_putchar(conv) < 0)
		return (-1);
	return (2);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		total;
	int		r;

	va_start(ap, format);
	total = 0;
	r = 0;
	while (*format && r >= 0)
	{
		if (*format == '%' && format[1] == '\0')
			r = -1;
		else if (*format == '%')
			r = ft_conv(*(++format), &ap);
		else
			r = ft_putchar(*format);
		format++;
		if (r > 0)
			total += r;
	}
	va_end(ap);
	if (r < 0)
		return (-1);
	return (total);
}
