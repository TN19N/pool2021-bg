/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 07:21:56 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/14 11:48:14 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		putchar(nb % 10 + '0');
	}
}
