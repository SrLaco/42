/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 21:19:50 by cade-mou          #+#    #+#             */
/*   Updated: 2026/07/02 01:30:06 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_n_len(long n)
{
	unsigned int	len;
	long			result;

	result = n;
	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		len++;
	while (result != 0)
	{
		result /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	len_n;
	size_t	i;

	nbr = n;
	len_n = get_n_len(nbr);
	i = len_n - 1;
	str = malloc((len_n + 1) * sizeof(char));
	str[len_n] = '\0';
	if (nbr == 0)
		str[i] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
