/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:28:19 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/16 10:17:47 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbOR;

	i = 0;
	nbOR = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i != power - 1)
	{
		nb *= nbOR;
		i++;
	}
	return (nb);
}
