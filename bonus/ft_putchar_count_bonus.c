/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_count_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 23:13:36 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/14 23:14:00 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putchar_count(char c, t_format f)
{
	int	printed;
	int	pad_len;

	printed = 0;
	pad_len = f.width - 1;
	if (!f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, ' ');
	ft_putchar_fd(c, 1);
	printed++;
	if (f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, ' ');
	return (printed);
}
