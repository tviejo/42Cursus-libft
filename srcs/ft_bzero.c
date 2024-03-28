/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 15:49:02 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] != '\0' && i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "qwerty";
	printf("string1:%s ",s1);
	ft_bzero(s1, 2);
	printf("result ft:%s\n",s1);
        bzero(s1, 2);
        printf("result lib:%s\n",s1);
}
*/
