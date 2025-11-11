/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:15:44 by kali              #+#    #+#             */
/*   Updated: 2025/11/12 00:33:01 by kali             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	parse_format(char *str)
{
	t_format	f;
	size_t		i;

	ft_memset(&f, 0, sizeof(t_format));
	i = 1;
	while (str[i] && ft_strchr("-0.# +", str[i]))
	{
        ft_strlcat(f.flags, &str[i], 1);
        i++;
    }
	while (ft_isdigit(str[i]))
	{
		f.width = atoi(&str[i]);
		while (ft_isdigit(str[i]))
			i++;
	}
	if (str[i] == '.')
	{
		i++;
		while (ft_isdigit(str[i]))
		{
			f.precision = atoi(&str[i]);
			while (ft_isdigit(str[i]))
				i++;
		}
	}
	f.type = str[i];
	return (f);
}