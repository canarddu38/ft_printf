/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:54:55 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/14 16:18:03 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

#include "stdio.h"
int	hex_len(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

int	number_len(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	max(int i, int j)
{
	if (i > j)
		return (i);
	return (j);
}

int	min(int i, int j)
{
	if (i < j)
		return (i);
	return (j);
}

void	get_padding_vars(int current_len, t_format f)
{

}
