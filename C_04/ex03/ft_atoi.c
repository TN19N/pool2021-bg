/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 07:23:04 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/19 09:48:35 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r' )
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	number;
	int	check;
	int	i;

	number = 0;
	check = 1;
	i = check_space(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			check *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number += (str[i] - '0');
		i++;
	}
	if (check == -1)
		number *= -1;
	return (number);
}
