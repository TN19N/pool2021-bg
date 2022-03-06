/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:19:11 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/21 17:29:31 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *) malloc(sizeof(*ptr) * (max - min + 1));
	if (ptr == NULL)
		return (-1);
	else
	{
		i = 0;
		while (max > min)
		{
			ptr[i] = min;
			i++;
			min++;
		}
		ptr[i] = '\0';
		*range = ptr;
		return (i);
	}
}
/*
int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;
	int size;
	min = 0;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	printf("\t%d\n", size);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	return 0;
}
*/
