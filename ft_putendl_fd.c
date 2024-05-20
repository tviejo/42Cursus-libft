/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:16:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/20 16:20:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, &s[0], ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
/*
int     main(void)
{
        ft_putendl_fd("qwerty",0);
}
*/
