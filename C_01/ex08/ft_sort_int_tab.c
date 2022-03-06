/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:03:47 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/09 15:03:52 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	x = 0;
	while (x < size)
	{
		j = 1;
		i = 0;
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + j))
			{
				swap(&tab[i], &tab[j]);
			}
			i++;
			j++;
		}
		x++;
	}
}
