/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 07:38:38 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/25 17:06:04 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>i

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

int	ft_c_words(char *str, char *charset)
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
	wrd = (char *)malloc(sizeof(char) * (word_len + 1));
	while (i < word_len)
	{
		wrd[i] = str[i];
		i++;
	}
	wrd[i] = 0;
	return (wrd);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings_tab;
	int		i;
	int		c_words;

	i = 0;
	c_words = ft_c_words(str, charset);
	strings_tab = (char **)malloc(sizeof(char *) * (c_words + 1));
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
	}
	strings_tab[i] = 0;
	return (strings_tab);
}
/*
int main()
{
	char str[] = "Hellov3Worldv3Ha3looovanyone";
	char charset[] = "v3";
	char **strs;

	strs = ft_split(str, charset);
	int i;
	i = 0;
	while(strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
}
*/
