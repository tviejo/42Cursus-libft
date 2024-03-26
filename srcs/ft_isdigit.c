/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 11:36:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int nb)
{
	if (48 <= nb && nb <= 57)
		return (nb);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_isdigit(52));
	printf("%d",isdigit(52));
}
*/
