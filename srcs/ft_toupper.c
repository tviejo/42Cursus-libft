/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 16:30:47 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int nb)
{
	if (97 <= nb && nb <= 122)
		return (nb - 32);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%c\n",ft_toupper('z'));
	printf("%c",toupper('z'));
}
*/
