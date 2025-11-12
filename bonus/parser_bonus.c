/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:15:44 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 13:37:04 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_format	parse_format(char *str, size_t *i)
{
	t_format	f;
	size_t		j;

	(*i)++;
	j = 0;
	ft_memset(&f.flags, 0, 6);
	while (str[*i] && ft_strchr("-0.# +", str[*i]))
		f.flags[j++] = str[(*i)++];
	while (ft_isdigit(str[*i]))
	{
		f.width = ft_atoi(&str[*i]);
		while (ft_isdigit(str[*i]))
			(*i)++;
	}
	if (str[*i] == '.')
	{
		(*i)++;
		while (ft_isdigit(str[*i]))
		{
			f.precision = ft_atoi(&str[*i]);
			while (ft_isdigit(str[*i]))
				(*i)++;
		}
	}
	f.type = str[*i];
	(*i)++;
	return (f);
}
