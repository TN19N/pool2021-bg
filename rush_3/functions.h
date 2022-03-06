/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:45:07 by ychaaibi          #+#    #+#             */
/*   Updated: 2021/08/22 19:54:04 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define READ_SIZE 4096

char	**ft_split(char *str, char *charset, int mode);
char 	***ft_dict(char *dict);
char	*ft_read_dict(char *path);
char	**ft_to_num(char *nbr);
char	*ft_atoi_char(char *nbr);
void	ft_nums3(char *nbr, char ***dict);
void	number_print(char **nums_array, char ***dict);
char    *trim_words(char *str);
void	dict_search(char *temp, char ***dict);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);


#endif
