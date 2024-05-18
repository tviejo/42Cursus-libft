/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:51:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/16 14:57:14 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;
	int	diff;

	if (s1 != NULL && s2 != NULL)
	{
		counter = 0;
		while (counter < n)
		{
			diff = ((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter];
			if (diff != 0)
				return ((int )diff);
			counter++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	s1[] = "ABCD";
	char    s6[] = "ABCE";

	printf("ft: %d\n", ft_memcmp(s1, s6, 1));
        printf("lib: %d\n\n", memcmp(s1, s6, 1));
	printf("ft: %d\n", ft_memcmp(s1, s6, 3));
	printf("lib: %d\n\n", memcmp(s1, s6, 3));
	printf("ft: %d\n", ft_memcmp(s1, s6, 4));
        printf("lib: %d\n\n", memcmp(s1, s6, 4));
	printf("ft: %d\n", ft_memcmp(NULL, s6, 3));
        printf("lib: %d\n\n", memcmp(NULL, s6, 3));
	printf("ft: %d\n", ft_memcmp(s1, NULL, 3));
        printf("lib: %d\n\n", memcmp(s1, NULL, 3));
	printf("ft: %d\n", ft_memcmp(s1, s6, -10));
        printf("lib: %d\n\n", memcmp(s1, s6, -10));
	printf("ft: %d\n", ft_memcmp(s1, s6, 1000000000000000));
        printf("lib: %d\n\n", memcmp(s1, s6, 1000000000000000));
}
*/
