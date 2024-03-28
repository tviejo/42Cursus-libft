/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:31:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 15:53:19 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	int		i;
	char	*ptr;

	size_s1 = 0;
	while (s1[size_s1] != '\0')
		size_s1++;
	size_s2 = 0;
	while (s2[size_s2] != '\0')
		size_s2++;
	ptr = malloc((size_s1 + size_s2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < size_s1)
		ptr[i] = s1[i];
	while (i < (size_s1 + size_s2))
	{
		ptr[i] = s2[i - size_s1];
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "qwerty";
	char s2[] = "azerty";
	char *ptr;

	ptr = ft_strjoin(s1, s2);
	printf("%s", ptr);
}
*/
