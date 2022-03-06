/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:23:37 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/16 10:16:29 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursion(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (recursion(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (recursion(index, 0, 1));
}
