/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:05:42 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/18 13:05:06 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	*base;

	j = 0;
	i = 0;
	base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &base[(unsigned int)str[i] / 16], 1);
			write(1, &base[(unsigned int)str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
