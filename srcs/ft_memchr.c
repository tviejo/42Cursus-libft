/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 17:56:08 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHID\0EFJKLMNOP";
        char    s2 = '\0';
	char	*s3;

	s3 = memchr(s1, s2, 10);
        printf("originale:%s", s3);
	printf("  adresse:%p\n", s3);
        s3 = ft_memchr(s1, s2, 10);
        printf("fonction:%s", s3);
	printf("  adresse:%p\n", s3);
}
*/
