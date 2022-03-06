/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:34:23 by ychaaibi          #+#    #+#             */
/*   Updated: 2021/08/22 19:21:33 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_in(str[i], charset))
	{
		i++;
	}
	return (i);
}

int	ft_wc(char *str, char *charset)
{
	int	c_words;

	c_words = 0;
	while (*str)
	{
		while (*str && ft_is_in(*str, charset))
		{
			str++;
		}
		if (*str)
			c_words++;
		while (*str && !ft_is_in(*str, charset))
			str++;
	}
	return (c_words);
}

char	*word(char *str, char *charset)
{
	char	*wrd;
	int		i;
	int		word_len;

	i = 0;
	word_len = ft_wordlen(str, charset);
	wrd = (char *)malloc(sizeof(char) * (ft_wordlen(str, charset) + 1));
	while (i < word_len)
	{
		wrd[i] = str[i];
		i++;
	}
	wrd[i] = 0;
	return (wrd);
}

char	**ft_split(char *str, char *charset, int mode)
{
	char	**strings_tab;
	int		i;

	i = 0;
	strings_tab = (char **)malloc(sizeof(char *) * (ft_wc(str, charset) + 1));
	while (*str)
	{
		while (*str && ft_is_in(*str, charset))
			str++;
		if (*str)
		{
			strings_tab[i] = word(str, charset);
			i++;
		}
		while (*str && !ft_is_in(*str, charset))
			str++;
		if (mode)
		{
			strings_tab[i] = str + 1;
			strings_tab[i + 1] = 0;
			return (strings_tab);
		}
	}
	strings_tab[i] = 0;
	return (strings_tab);
}
