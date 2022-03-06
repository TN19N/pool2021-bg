/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 06:40:03 by mannouao          #+#    #+#             */
/*   Updated: 2021/08/11 08:45:54 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	test_firstOne(char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z')
	{	
		str[0] -= 32;
	}
}

void	test_is_number(char *str, int i)
{
	if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
	{
		str[i] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	test_firstOne(str);
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				if (!(str[i - 1] >= 'a' && str [i - 1] <= 'z'))
				{
					test_is_number(str, i);
				}
			}
		}
		i++;
	}
	return (str);
}
