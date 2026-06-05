/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:09:35 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/29 07:09:41 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[524288] = "Hello ";
// 	printf("%d\n", ft_strncat(dest, "algebra", 7));
// 	printf("%d\n", strncmp(dest, " ZEBRA", 3));
// }