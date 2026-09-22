/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 06:47:29 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/22 06:47:29 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		if (ft_putchar(s[i]) < 0)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned long n, const char *base)
{
	unsigned long	b;
	int				len;

	b = 0;
	while (base[b])
		b++;
	len = 0;
	if (n >= b)
	{
		len = ft_putnbr_base(n / b, base);
		if (len < 0)
			return (-1);
	}
	if (ft_putchar(base[n % b]) < 0)
		return (-1);
	return (len + 1);
}

int	ft_putptr(void *ptr)
{
	int	r;

	if (!ptr)
		return (ft_putstr("(nil)"));
	if (ft_putstr("0x") < 0)
		return (-1);
	r = ft_putnbr_base((size_t)ptr, "0123456789abcdef");
	if (r < 0)
		return (-1);
	return (r + 2);
}
