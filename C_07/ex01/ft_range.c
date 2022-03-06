/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:34:58 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/23 19:30:22 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		ptr = (int *) malloc(sizeof(*ptr) * (max - min + 1));
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
#include <stdio.h>
int main()
{
	int i;
	int *tab;

	i = 0;
	tab  = ft_range(-5, 10);
	while(tab[i] != '\0')
	{
		printf("%d\t", tab[i]);
		i++;
	}
}
