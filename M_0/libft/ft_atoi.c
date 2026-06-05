/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 05:14:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/04 14:53:59 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_signal(int total, int is_signal)
{
	if (is_signal == -1)
		return (total * -1);
	else if (is_signal == 1 || is_signal == 0)
		return (total);
	return (0);
}
	
int	ft_atoi(char *str)
{
	int	i;
	int	is_signal;
	int	total;

	i = 0;
	is_signal = 0;
	total = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_signal--;
		i++;
	}
	else if (str[i] == '+')
	{
		is_signal++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = (str[i] - '0') + (total * 10);
		i++;
	}
	return (check_signal(total, is_signal));
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("-12345"));
// 	printf("%d\n", ft_atoi("--54321"));
// 	printf("%d\n", ft_atoi("-2147483647"));
// 	printf("%d\n", ft_atoi("-+2147483648"));
// 	printf("%d\n", ft_atoi("-0"));
// 	printf("%d\n", ft_atoi("+12345"));
// 	printf("%d\n", ft_atoi("+-54321"));
// 	printf("%d\n", ft_atoi("+2147483647"));
// 	printf("%d\n", ft_atoi("+-2147483648"));
// 	printf("%d\n", ft_atoi("+0"));
// 	printf("%d\n", atoi("-12345"));
// 	printf("%d\n", atoi("--54321"));
// 	printf("%d\n", atoi("-2147483647"));
// 	printf("%d\n", atoi("-+2147483648"));
// 	printf("%d\n", atoi("-0"));
// 	printf("%d\n", atoi("+12345"));
// 	printf("%d\n", atoi("+-54321"));
// 	printf("%d\n", atoi("+2147483647"));
// 	printf("%d\n", atoi("+-2147483648"));
// 	printf("%d\n", atoi("+0"));
// }