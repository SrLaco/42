/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 06:27:07 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/24 02:14:05 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	total;

	i = 0;				//percorre a string
	is_negative = 0;	//calcula o sinal
	total = 0;			//retorna o valor
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative++; // conta só os sinais de menos
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = (str[i] - '0') + (total * 10);
		//total recebe o valor convertido na tabela ascii
		//se de int pra char é + '0', aqui é - '0'
		//e "vezes 10", faz o numero atual (maior que dez) 
		//ir pra casa da dezena, e a dezena pra centena,
		//percorrendo o ponteiro str.
		i++;
	}
	if (is_negative % 2 = 1) //qualquer número par divido por dois tem resto 0
		return (total * -1); //então uma quantidade ímpar de sinais de - retorna 1
	return (total);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("12345"));
// 	printf("%d\n", ft_atoi("-54321"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", ft_atoi("0"));
// }
