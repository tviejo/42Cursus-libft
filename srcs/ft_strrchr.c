/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:37:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 21:03:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lastc;

	lastc = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			lastc = (char *)s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	else
		return (lastc);
}
/*
#include <string.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJELMNOP";
        char    s2 = '\0';
	char	*s3;

	s3 = strrchr(s1, s2);
        printf("originale:%s", s3);
	printf("  adresse:%p\n", s3);
        s3 = ft_strrchr(s1, s2);
        printf("fonction:%s", s3);
	printf("  adresse:%p\n", s3);
}
*/
