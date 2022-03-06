/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:30:29 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/16 10:17:07 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursion(int n, int p, int i)
{
	if (p == 0)
		return (1);
	if (p == 1)
		return (i);
	if (p < 0)
		return (0);
	return (recursion(n, p - 1, i * n));
}

int	ft_recursive_power(int nb, int power)
{
	return (recursion(nb, power, nb));
}
