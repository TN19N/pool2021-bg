/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 06:50:36 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/21 17:38:51 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ToT_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

void	stock(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	n;
	int	j;
	int	y;

	i = -1;
	n = 0;
	y = 0;
	while (i++ < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res[n] = strs[i][j];
			j++;
			n++;
		}
		y = 0;
		while (i + 1 < size && sep[y])
		{
			res[n] = sep[y];
			n++;
			y++;
		}
	}
	res[n] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	len = 0;
	if (size == 0)
	{
		res = (char *) malloc(sizeof(*res) * 1);
		return (res);
	}
	len += ToT_len(size, strs, sep);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	stock(size, strs, sep, res);
	return (res);
}
/*
int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int i;

	strs = (char**)malloc(4 * sizeof(char *));
	strs[0] = "Hello";
	strs[1] = "Hellooo";
	strs[2] = "Ha ...";
	strs[3] = "ok ;(";
	separator = "__one_Hour_After__";
	result = ft_strjoin(4, strs, separator);
	printf("%s\n", result);
}
*/
