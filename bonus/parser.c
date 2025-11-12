/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:15:44 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 09:52:49 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	parse_format(char *str, size_t *i)
{
	t_format	f;

	ft_memset(&f, 0, sizeof(t_format));
	(*i)++;
	while (str[*i] && ft_strchr("-0.# +", str[*i]))
		ft_strlcat(f.flags, &str[*i++], 1);
	while (ft_isdigit(str[*i]))
	{
		f.width = atoi(&str[*i]);
		while (ft_isdigit(str[*i]))
			(*i)++;
	}
	if (str[*i] == '.')
	{
		(*i)++;
		while (ft_isdigit(str[*i]))
		{
			f.precision = atoi(&str[*i]);
			while (ft_isdigit(str[*i]))
				(*i)++;
		}
	}
	f.type = str[*i];
	(*i)++;
	return (f);
}
