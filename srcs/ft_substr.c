/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:11:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/27 20:56:34 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' || i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJKLMNOP";
        char    *s3;

        s3 = ft_substr(s1, 145, 15);
        printf("%s\n", s3);
}
*/