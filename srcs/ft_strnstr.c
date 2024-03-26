/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:00:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 18:44:13 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
        char    *str_temp;
	size_t		i;
        int             cs;
        int             cf;

        cs = 0;
        cf = 0;
	i = 0;
        if (to_find[0] == '\0')
                return ((char *)str);
        while (str[cs] != '\0' && i < len)
        {
                if ((to_find[cf] == '\0') || ((str[cs] == to_find[cf])
                                && (cf > 0) && (to_find[cf + 1] == '\0')))
                        return (str_temp);
                else if ((str[cs] != to_find[cf]) && (cf > 0)
				&& (to_find[cf] != '\0'))
                        cf = 0;
                else if ((str[cs] == to_find[cf]) && (cf > 0)
				&& (to_find[cf] != '\0'))
                        cf++;
                if (str[cs] == to_find[cf] && cf == 0)
                {
                        str_temp = &(((char *)str)[cs]);
                        cf++;
                }
		i++;
                cs++;
        }
        return ("\0");
}

#include <string.h>
#include <stdio.h>
int main(void)
{
        char    s1[] = "ABCDEGHIDEFJKLMNOP";
        char    s2[] = "DEF";
	char	*s3;

        s3 = ft_strnstr(s1, s2, 5);
        printf("%s\n", s3);
}
