/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 17:06:10 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/19 11:12:43 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	c;
	unsigned int	j;

	i = 0;
	len = 0;
	j = 0;
	while (dest[len])
		len++;
	c = len;
	while (src[i])
		i++;
	if (c >= size)
		return (i + size);
	while (src[j] && len + 1 < size)
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = 0;
	return (i + c);
}
