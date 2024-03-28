/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:14:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 23:29:14 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_len(long int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_convert(char *nbr_char, int nb, long int leni)
{
	if (nb < 0)
	{
		nbr_char[0] = '-';
		nb = -nb;
		leni++;
	}
	while (nb > 0)
	{
		nbr_char[leni--] = (nb % 10 + 48);
		nb = nb / 10;
	}
}

char	*ft_itoa(int nb)
{
	long int	leni;
	char		*nbr_char;

	leni = ft_len(nb);
	nbr_char = malloc((leni + 1) * sizeof(char));
	if (nbr_char == NULL)
		return (NULL);
	nbr_char[0] = '0';
	nbr_char[leni + 1] = '\0';
	if (nb == -2147483648)
		nbr_char = "-2147483648";
	else
	{
		ft_convert(nbr_char, nb, leni);
	}
	return (nbr_char);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(21474836472451545454));
}
*/
