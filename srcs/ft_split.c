/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:14:25 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/28 21:03:13 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	nbwords;

	i = 0;
	nbwords = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			nbwords++;
		i++;
	}
	return (nbwords);
}

int	ft_len_words(const char *str, char c)
{
	int	i;
	int	len_words;

	len_words = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		len_words++;
		i++;
	}
	return (len_words);
}

char	*ft_copy_line(const char *str, int len_words)
{
	char	*line;
	int		k;

	line = malloc((len_words + 1) * sizeof(char));
	if (line == 0)
		return (0);
	k = 0;
	while (k < len_words)
	{
		line[k] = str[k];
		k++;
	}
	line[k] = '\0';
	return (line);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	char	**output;
	int		len_words;

	if (!str)
		return (0);
	output = malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (output == 0)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			len_words = ft_len_words(&str[i], c);
			output[j++] = ft_copy_line(&str[i], len_words);
			i += len_words;
		}
		else
			i++;
	}
	output[j] = NULL;
	return (output);
}
/*
int	main(void)
{
	char	*str = "qwertyubdbdbekjqkjkbjejdwbhjdbejbdqwwndwjwe";
	char	**output;
	int	i;

//	outputi = ft_count_words(str, charset);
//	printf("%d" , outputi);
//	output = ft_len_words(str, charset);
//      printf("%d" , output);
      
	output = ft_split(str, 'e');
	i = 0;
	while (output[i] != NULL)
	{
        	printf("%s\n" , output[i]);
		i++;
	}
}
*/
