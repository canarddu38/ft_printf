/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:03:18 by kali              #+#    #+#             */
/*   Updated: 2025/11/12 00:04:31 by kali             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	display_hex(size_t nb, int in_lowercase)
{
	char	output;
	int		len;

	len = 0;
	if (nb >= 16)
		len += display_hex(nb / 16, in_lowercase);
	output = nb % 16;
	if (output >= 10)
		output = (output - 10) + ('A' + 32 * (in_lowercase != 0));
	else
		output = output + '0';
	ft_putchar_fd(output, 1);
	return (len + 1);
}