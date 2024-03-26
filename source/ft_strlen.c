/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 12:56:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int	ft_strlen(const char *s)
{
	long unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s[] = "qwerty";
	printf("%ld\n",ft_strlen(s));
	printf("%ld",strlen(s));
}
*/
