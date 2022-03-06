/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:24:45 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/18 11:12:43 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	while ((i * i) <= nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	if (nb == 2147483647)
		return (2147483647);
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}
