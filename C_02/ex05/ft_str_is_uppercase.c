/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:32:15 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/10 17:47:26 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	counter;

	counter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 'A' && str[i] <= 'Z'))
		{
			counter = 0;
		}
		i++;
	}
	return (counter);
}
