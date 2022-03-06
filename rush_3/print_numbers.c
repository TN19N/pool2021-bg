/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:31:23 by ychaaibi          #+#    #+#             */
/*   Updated: 2021/08/22 19:54:23 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>
char *ft_atoi_char(char *nbr)
{
	int		i;
	char	*number;

	i = 0;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			return (0);
		nbr++;
	}
	while (nbr[i] == 48)
		nbr++;
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		i++;
	}
	if (nbr[i] == '.' && nbr[i + 1])
	{
		if (nbr[i + 1] >= '0' && nbr[i + 1] <= '9')
			return (0);
	}
	number = (char *)malloc(sizeof(char) * (i + 1));
	number[i] = 0;
	i--;
	while (i >= 0)
	{
		number[i] = nbr[i];
		i--;
	}
	return (number);
}


	

int		number_len(char *nbr)
{
	int i;

	i = 0;
	while (nbr[i])
		i++;
	return (i);
}

void	ft_init(char *nbr)
{
	int i;

	i = 0;
	while (i < 3)
	{
		nbr[i] = '0';
		i++;
	}
}

char	**ft_to_num(char *nbr)
{
	int	num_len;
	int	i;
	int	j;
	char **numbers;
	int	size;

	num_len = number_len(nbr);
	size = num_len;
	while (size % 3)
		size++;	
	size = size / 3;
	numbers = (char **)malloc(sizeof(char*) * (size + 1)); 
	i = size - 1;
	num_len--;
	while (i >= 0)
	{
		numbers[i] = (char *)malloc(sizeof(char) * 3);
		j = 2;
		while (j >= 0 && num_len >= 0)
		{
			numbers[i][j] = nbr[num_len];
			j--;
			num_len--;
		}
		while (j >= 0)
		{
			numbers[i][j] ='0';
			j--;
		}
		i--;
	}
	numbers[size] = 0;
	return (numbers);
}

void	ft_nums3(char *nbr, char ***dict)
{
	int		i;
	char	temp[4];

	temp[3] = 0;
	i = 0;
	while (i < 3)
	{
		if (nbr[i] != '0')
		{
			if (i == 0)
			{
				temp[0] = nbr[i];
				temp[1] = 0;
				dict_search(temp, dict);
				dict_search("100", dict);
			}
			else if (i == 1)
			{
				if (nbr[i] >= '2')
				{
					temp[0] = nbr[i]; 
					temp[1] = '0';
					temp[2] = 0;
					dict_search(temp, dict);
				}
				else
				{
					temp[0] = nbr[i];
					temp[1] = nbr[i + 1];
					temp[2] = 0;
					dict_search(temp, dict);
					return ;
				}
			}
			else
			{
				temp[0] = nbr[i];
				temp[1] = 0;
				dict_search(temp, dict);
			}
		}
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


void	fill_in_thousand(char *thousand, int size)
{
	int	i;

	thousand[0] = '1';
	i = 1;
	while (i < size - 1)
	{
		thousand[i] = '0';
		i++;
	}
	thousand[i] = 0;
}

void	number_print(char **nums_array, char ***dict)
{
	int		i;
	int		len;
	char	*thousand;
	int		t_len;

	len = 0;
	while (nums_array[len])
		len++;
	i = 0;
	while (i < len)
	{
		if (i == len - 1)
			ft_nums3(nums_array[i], dict);
		else 
		{
			if (ft_strcmp(nums_array[i], "000"))
			{
				t_len = (len - 1 - i) * 3 + 2;
				thousand = (char *)malloc(sizeof(char) * t_len);
				fill_in_thousand(thousand, t_len);
				ft_nums3(nums_array[i], dict);
				dict_search(thousand, dict);
			}
		}
		i++;
	}
}

char 	*trim_words(char *str)
{
	int		i;
	int 	len;
	char *new_str;

	len = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		while (str[i] != 32 && str[i])
		{
			i++;
			len++;
		}
		while (str[i] == 32)
			i++;
		if (str[i])
			len++;
	}
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	len = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		while (str[i] != 32 && str[i])
		{
			new_str[len] = str[i];
			i++;
			len++;
		}
		while (str[i] == 32)
			i++;
		if (str[i])
		{
			new_str[len] = ' ';
			len++;
		}
	}
	new_str[len] = 0;

	return (new_str);
}
