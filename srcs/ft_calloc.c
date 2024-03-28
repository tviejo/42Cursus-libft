/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:01:13 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 15:49:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	while (i++ <= nelem)
		ptr[i] = 0;
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*ptr;

	ptr = ft_calloc(10, sizeof(char));
	printf("fonction: %s", ptr);
	free(ptr);
	ptr = calloc(10, sizeof(char));
        printf("\noriginale: %s", ptr);
        free(ptr);
}
*/
