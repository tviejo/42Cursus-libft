/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:15:42 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 17:48:04 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (((unsigned char *)s1)[counter] != '\0'
		&& ((unsigned char *)s2)[counter] != '\0'
		&& counter < n
		&& ((unsigned char *)s1)[counter] == ((unsigned char *)s2)[counter])
		counter++;
	if (counter == n)
		return (0);
	return (((unsigned char *)s1)[counter] - ((unsigned char *)s2)[counter]);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCD";
	char    s3[] = "AB";
	char    s4[] = "ABCDE";
	char    s5[] = "ABCE";
	char    s6[] = "ABCE";

	printf("%d\n", ft_memcmp(s1, s2, 4));
	printf("%d\n\n", memcmp(s1, s2, 4));
	printf("%d\n", ft_memcmp(s1, s3, 4));
	printf("%d\n\n", memcmp(s1, s3, 4));
	printf("%d\n", ft_memcmp(s1, s4, 5));
	printf("%d\n\n", memcmp(s1, s4, 5));
	printf("%d\n", ft_memcmp(s1, s5, 4));
	printf("%d\n\n", memcmp(s1, s5, 4));
	printf("%d\n", ft_memcmp(s1, s6, 3));
	printf("%d\n\n", memcmp(s1, s6, 3));
}
*/
