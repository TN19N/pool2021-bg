/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:28:33 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/16 10:19:20 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}
