/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:59:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 13:38:02 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		s2[i] = '\0';
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
	char s2[] = "qwerty";
        printf("string2:%s ",s2);
        ft_bzero(s2, 2);
        printf("result lib:%s\n",s2);
}
*/
