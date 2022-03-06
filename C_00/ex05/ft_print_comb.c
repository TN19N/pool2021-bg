/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:26:07 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/08 07:01:19 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_f(int i, int z, int x)
{
	write (1, &i, 1);
	write (1, &z, 1);
	write (1, &x, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	z;
	int	x;

	i = '0';
	while (i <= '7')
	{
		z = i + 1;
		while (z <= '8')
		{
			x = z + 1;
			while (x <= '9')
			{
				write_f(i, z, x);
				if (i != '7')
				{
					write (1, ", ", 2);
				}
				x++;
			}
			z++;
		}
		i++;
	}
}
