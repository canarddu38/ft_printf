/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_functions_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:18 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 17:23:11 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_put_precision_rep(int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
	return (i);
}

int	ft_put_padding_rep(int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_count(int nb, t_format f)
{
	int	i;
	int	is_negative;

	is_negative = 0;
	i = number_len(nb);
	ft_put_padding_rep(f.width - f.precision - (nb < 0));
	if (nb < 0)
	{
		is_negative = 1;
		ft_putchar_fd('-', 1);
		nb = -nb; // TODO
		i--;
	}
	i += ft_put_precision_rep(f.precision - i);
	ft_putnbr_fd(nb, 1);
	return (i);
}

int	ft_uint_putnbr_count(unsigned int nb, t_format f)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_uint_putnbr_count(nb / 10, f);
	ft_putchar_fd((nb % 10) + '0', 1);
	return (len + 1);
}

int	ft_putstr_count(char *str, t_format f)
{
	int	i;
	int	j;

	j = 0;
	if (str == 0)
		str = "(null)";
	i = ft_put_padding_rep(f.width - ft_strlen(str));
	while (i < f.width)
	{
		i++;
		ft_putchar_fd(str[j++], 1);
	}
	return (i);
}

int	ft_putchar_count(char c, t_format f)
{
	int	i;

	i = ft_put_padding_rep(f.width - 1) + 1;
	ft_putchar_fd(c, 1);
	return (i);
}

int	ft_putptr_count(void *ptr, t_format f)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr_count("(nil)", f));
	len += ft_putstr_count("0x", f);
	len += display_hex((unsigned long)ptr, 1);
	return (len);
}
