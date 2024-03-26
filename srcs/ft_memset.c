/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 14:14:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] != '\0' && i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s[] = "qwerty";
	printf("%s\n",(char *)ft_memset(s, 'a', 2));
	printf("%s",(char *)memset(s, 'a', 2));
}
*/
