/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:14:25 by tviejo            #+#    #+#             */
/*   Updated: 2024/05/18 20:28:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	nb_words;
	int	i;

	nb_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] != c)
			nb_words++;
		else if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			nb_words++;
		i++;
	}
	return (nb_words);
}

static int	ft_len_words(const char *str, char c)
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

static char	*ft_copy_line(const char *str, int len_words)
{
	char	*line;
	int		k;

	line = (char *)malloc((len_words + 1) * sizeof(char));
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

static char	**ft_res(char **output, const char *str, char c)
{
	int	i;
	int	j;
	int	len_words;

	output = (char **)malloc((ft_count_words(str, c) + 1) * sizeof(char *));
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
	output[j] = 0;
	return (output);
}

char	**ft_split(const char *str, char c)
{
	char	**output;

	output = NULL;
	if (str != NULL)
	{
		output = ft_res(output, str, c);
	}
	return (output);
}
/*
int	main(void)
{
	char	*str = "qwertyubdbdbekjqkjkbjejdwbhjdbejbdqwwndwjwe";
	char	**output;
	int	i;

//	output = ft_count_words(str, charset);
//	printf("%d" , outputi);
//	output = ft_len_words(str, charset);
//      printf("%d" , output);
      
	output = ft_split(str, 'e');
	i = 0;
	while (output[i] != NULL)
	{
        	printf("1: %s\n" , output[i]);
		i++;
	}
	printf("\n");
	output = ft_split("  qwerty  azerty  ", ' ');
        i = 0;
        while (output[i] != NULL)
        {
                printf("1: %s\n" , output[i]);
                i++;
        }
        printf("\n");
	output = ft_split(str, ' ');
        i = 0;
        while (output[i] != NULL)
        {
                printf("2: %s\n" , output[i]);
                i++;
        }
	printf("\n");
        output = ft_split(NULL, 'e');
//        i = 0;
//        while (output[i] != NULL)
//        {
//                printf("3: %s\n" , output[i]);
//                i++;
//        }
}
*/
