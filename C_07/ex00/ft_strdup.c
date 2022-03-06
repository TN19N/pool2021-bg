/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 06:53:28 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/21 07:38:50 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ptr = (char *) malloc((i + 1) * sizeof(*ptr));
	i = 0;
	if (ptr == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
