/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 20:57:40 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 15:26:24 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
static char    *ft_strstr(char *str, char *to_find)
{
        char    *str_temp;
        int             cs;
        int             cf;

        cs = 0;
        cf = 0;
        if (to_find[0] == '\0')
                return (str);
        while (str[cs] != '\0')
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
                        str_temp = &(str[cs]);
                        cf++;
                }
                cs++;
        }
        return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
*/
