/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:07:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/27 17:39:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long int	cpt;
	int			sign;
	long int	value;

	cpt = 0;
	value = 0;
	sign = 1;
	while ((str[cpt] == ' ' || (9 <= str[cpt] && str[cpt] <= 13)))
		cpt++;
	if (str[cpt] == '-' || str[cpt] == '+')
	{
		if (str[cpt] == '-')
			sign *= -1;
		cpt++;
	}
	while ('0' <= str[cpt] && str[cpt] <= '9')
	{
		value = (value * 10) + (str[cpt] - '0');
		cpt++;
	}
	return (value * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("originale: %d\n", atoi("            -2147483648"));
	printf("fonction: %d\n", ft_atoi("            -2147483648"));
	printf("\noriginale: %d\n", atoi("     +2147483647"));
	printf("fonction: %d\n", ft_atoi("     +2147483647"));
	printf("\noriginale:%d\n", atoi("-----+152 566"));
	printf("fonction: %d\n", ft_atoi("-----+152 566"));
	printf("\noriginale:%d\n", atoi("-----+152a566"));
	printf("fonction: %d\n", ft_atoi("-----+152a566"));
	printf("\noriginale:%d\n", atoi("            	\v 52	566"));
	printf("fonction: %d\n", ft_atoi("              \v 52   566"));
	printf("\noriginale:%d\n", atoi("52566"));
	printf("fonction: %d\n", ft_atoi("52566"));
	printf("\noriginale:%d\n", atoi("0"));
	printf("fonction: %d\n", ft_atoi("0"));
	printf("\noriginale:%d\n", atoi("-0"));
	printf("fonction: %d\n", ft_atoi("-0"));
	printf("\noriginale:%d\n", atoi(""));
	printf("fonction: %d\n", ft_atoi(""));
}
*/