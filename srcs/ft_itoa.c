/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:14:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/30 16:03:43 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_len(long int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_convert(char *nbr_char, long int nb, long int leni)
{
	nbr_char[leni + 1] = '\0';
	while (nb > 0)
	{
		nbr_char[leni--] = (nb % 10 + 48);
		nb = nb / 10;
	}
}

char	*ft_itoa(int nb2)
{
	long int	leni;
	char		*nbr_char;
	long int	nb;

	nb = nb2;
	leni = ft_len(nb);
	nbr_char = (char *)malloc((leni + 2) * sizeof(char));
	if (nbr_char == NULL)
		return (nbr_char);
	if (nb < 0)
	{
		nbr_char[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
	{
		nbr_char[0] = '0';
		nbr_char[1] = '\0';
	}
	if (nb > 0)
		ft_convert(nbr_char, nb, leni);
	return (nbr_char);
}
/*
int	main(void)
{
	char *ptr;

	ptr = ft_itoa(-2147483648);
	ft_putstr_fd(ptr, 1);
	free(ptr);
}
*/
