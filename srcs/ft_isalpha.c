/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 19:39:43 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int nb)
{
	if ((65 <= nb && nb <= 87) || (97 <= nb && nb <= 122))
		return (nb);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_isalpha(12));
	printf("%d",isalpha(12));
}
*/
