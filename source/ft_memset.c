/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 13:25:10 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s2;
	void	*s3;

	s2 = (char *) s;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s2[i] = c;
		i++;
	}
	s3 = (void *)s2;
	return (s3);
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
