/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 07:43:52 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/08 07:01:34 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putcher(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putcher((a / 10) + '0');
			ft_putcher((a % 10) + '0');
			ft_putcher(' ');
			ft_putcher((b / 10) + '0');
			ft_putcher((b % 10) + '0');
			if (!((a == 98) && (b == 99)))
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
