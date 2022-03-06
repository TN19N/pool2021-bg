/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:32:33 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/10 17:50:28 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	counter;

	counter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
		{
			counter = 0;
		}
		i++;
	}
	return (counter);
}
