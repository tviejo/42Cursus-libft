/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:57:40 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 21:05:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_lenstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (set != NULL)
	{
		while (s1[i] != '\0' && ft_charset(s1[i], set) == 0)
			i++;
		i++;
		if (ft_charset(s1[i - 1], set) == 0)
			i = 0;
	}
	return (i);
}

static int	ft_lenend(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	if (set != NULL)
	{
		while (i > 0 && ft_charset(s1[i - 1], set) == 0)
			i--;
		i--;
		if (ft_charset(s1[i], set) == 0)
			i = ft_strlen(s1);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	ptr = NULL;
	if (s1 != NULL)
	{
		start = ft_lenstart(s1, set);
		end = ft_lenend(s1 + start, set);
		ptr = ft_substr(s1, start, end);
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("qwertyasedfg", "m"));
	return (1);
}
*/
