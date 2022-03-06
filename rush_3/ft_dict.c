/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:49:50 by ychaaibi          #+#    #+#             */
/*   Updated: 2021/08/22 19:53:08 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

char    *ft_read_dict(char *path)
{
	int		fd;
	char	*buf;
	int		t;

	buf = (char *)malloc(sizeof(char) * READ_SIZE);
	fd = open(path, O_RDONLY);
	if(fd == -1)
	{
		return (0);
	}
	if ((t = read(fd, buf, READ_SIZE-1)) > 0)
	{
        buf[t] = '\0';
    }
    close(fd);
    return (buf);
}

int		ft_len_dict(char **dict)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		i++;
	}
	return (i);
}

void	dict_search(char *temp, char ***dict)
{	
	int	i;

	i = 0;
	while (dict[i])
	{
		if (!(ft_strcmp(trim_words(dict[i][0]), temp)))
		{
			ft_putstr(trim_words(dict[i][1]));
			ft_putstr(" ");
		}
		i++;
	}
}

char	***ft_dict(char *dict_t)
{
	char	**dictionary;
	char	***dict;
	int		dict_len;
	int		i;

	dictionary = ft_split(dict_t, "\n", 0);
	dict_len = ft_len_dict(dictionary);
	dict = (char ***)malloc(sizeof(char **) * (dict_len + 1));
	i = 0;
	while (i < dict_len)
	{
		dict[i] = ft_split(dictionary[i], ":", 1);
		i++;
	}
	return (dict);
}



