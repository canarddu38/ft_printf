/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:15:44 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/13 13:28:46 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	index_of(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

t_format	parse_format(char *str, size_t *i)
{
	t_format	f;

	(*i)++;
	ft_memset(&f.flags, 0, 6);
	f.width = 0;
	f.precision = -1;
	while (str[*i] && ft_strchr("-0# +", str[*i]))
	{
		f.flags[index_of(str[*i], "-0# +") % 6] = str[*i];
		(*i)++;
	}
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
	f.type = str[(*i)++];
	return (f);
}
