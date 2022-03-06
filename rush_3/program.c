/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:29:22 by ychaaibi          #+#    #+#             */
/*   Updated: 2021/08/22 19:54:06 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int main(int ac, char **av)
{
	char	***dict;
	char	**nums_array;
	char	*num;

	if (ac == 2)
		dict = ft_dict(ft_read_dict("numbers.dict"));
	else if (ac == 3)
		dict = ft_dict(ft_read_dict(av[2]));
	else
		return (0);

	if (!dict)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	num = ft_atoi_char(av[1]);
	if (!num)
	{
		ft_putstr("error");
		return (0);
	}
	nums_array = ft_to_num(num);
	number_print(nums_array, dict);
	return (0);
}
