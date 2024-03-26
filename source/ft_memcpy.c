/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 13:48:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest2;
	char	*src2;

	dest2 = (void *)dest;
	src2 = (void *)src;
	i = 0;
	while (dest2[i] != '\0' && src2[i] != '\0' && i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return ((void *)dest2);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char dest[] = "qwerty";
	char src[] = "azerty";
	printf("%s\n",(char *)ft_memcpy(dest, src, 1));
	printf("%s",(char *)memcpy(dest, src, 1));
}
*/
