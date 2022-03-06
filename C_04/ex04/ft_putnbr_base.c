/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 07:23:27 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/19 09:43:58 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_if_err(char *base, int *err)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*err = 1;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			*err = 1;
		j = 0;
		while (base[j] != '\0')
		{
			if (i != j)
			{
				if (base[i] == base[j])
					*err = 1;
			}
			j++;
		}
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;
	unsigned int	i;
	int				err;

	err = 0;
	i = 0;
	check_if_err(base, &err);
	if (err == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		nb = nbr;
		while (base[i])
			i++;
		if (nb < i)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / i, base);
			ft_putchar(base[nb % i]);
		}
	}
}
