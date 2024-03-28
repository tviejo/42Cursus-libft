/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:15:05 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 22:01:10 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	if (s == NULL)
		output = NULL;
	else if (f == NULL)
		output = ft_strdup(s);
	else
	{
		output = malloc((ft_strlen(s) + 1) * sizeof(char));
		if (output == NULL)
			return (NULL);
		i = -1;
		while (s[++i] != '\0')
			output[i] = f(i, s[i]);
		output[i + 1] = '\0';
	}
	return (output);
}
