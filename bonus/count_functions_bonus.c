/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_functions_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:18 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/13 23:50:00 by julcleme         ###   ########lyon.fr   */
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

int	ft_put_padding_rep(int count, char c)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_putchar_fd(c, 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_count(int nb, t_format f)
{
	long	n;
	int		num_len;
	int		printed;
	int		neg;
	int		pad_len;
	int		prec_len;
	char	pad_char;

	n = nb;
	pad_char = ' ';
	neg = (n < 0);
	if (neg)
		n = -n;
	num_len = (number_len(nb) - (neg)) * !(f.precision == 0 && nb == 0);
	prec_len = (f.precision - num_len * (f.precision > num_len));
	pad_len = f.width - (num_len + (prec_len > 0) * prec_len + neg);
	if (pad_len < 0)
		pad_len = 0;
	if (f.flags[FLAG_ZERO] && !f.flags[FLAG_MINUS] && f.precision < 0)
		pad_char = '0';
	printed = 0;
	if (!f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, pad_char);
	if ((f.flags[FLAG_PLUS] || f.flags[FLAG_SPACE]) && !neg)
	{
		if (f.flags[FLAG_PLUS])
			ft_putchar_fd('+', 1);
		else
			ft_putchar_fd(' ', 1);
		printed++;
	}
	if (neg)
	{
		ft_putchar_fd('-', 1);
		printed++;
	}
	printed += ft_put_precision_rep(prec_len);
	if (num_len > 0)
	{
		if (nb == -2147483648)
			ft_putstr_fd("2147483648", 1);
		else
			ft_putnbr_fd(n, 1);
		printed += num_len;
	}
	if (f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, pad_char);
	return (printed);
}

int	ft_uint_putnbr_count(unsigned int nb, t_format f)
{
	int		num_len;
	int		printed;
	int		prec_len;
	int		pad_len;
	char	pad_char;

	pad_char = ' ';
	prec_len = 0;
	printed = 0;
	num_len = number_len((int)nb);
	if (f.precision > num_len)
		prec_len = f.precision - num_len;
	pad_len = f.width - (num_len + prec_len);
	if (f.flags[FLAG_ZERO] && !f.flags[FLAG_MINUS] && f.precision < 0)
		pad_char = '0';
	if (!f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, pad_char);
	printed += ft_put_precision_rep(prec_len);
	if (!(f.precision == 0 && nb == 0))
	{
		if (nb == 0)
			ft_putchar_fd('0', 1);
		printed += display_uint(nb);
	}
	if (f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, ' ');
	return (printed + (nb == 0));
}

int	ft_putstr_count(char *str, t_format f)
{
	int	len;
	int	printed;
	int	pad_len;
	int	is_null;

	is_null = (!str);
	if (is_null)
		str = "(null)";
	len = ft_strlen(str);
	if (f.precision > -1 && f.precision < len)
		len = f.precision;
	//if (f.width != -1 && len > f.width)
	//	len = f.width;
	pad_len = f.width - len;
	if (pad_len < 0)
		pad_len = 0;
	printed = 0;
	if (!f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, ' ');
	if (!is_null || f.precision >= 6 || f.precision == -1)
		write(1, str, len);
	printed += len;
	if (f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, ' ');
	return (printed);
}

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

int	ft_putptr_count(void *ptr, t_format f)
{
	int	printed = 0;
	int	len;
	int	pad_len;
	char	pad_char;

	pad_char = ' ';
	if (f.flags[FLAG_ZERO] && !(f.flags[FLAG_MINUS] || f.precision > -1))
		pad_char = '0';
	if (!ptr)
		return (ft_putstr_count("(nil)", f));
	len = 2 + hex_len((unsigned long)ptr);
	pad_len = f.width - len;
	if (pad_len < 0)
		pad_len = 0;
	if (!f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, pad_char);
	ft_putstr_fd("0x", 1);
	printed += 2;
	printed += display_hex((unsigned long)ptr, 1);
	if (f.flags[FLAG_MINUS])
		printed += ft_put_padding_rep(pad_len, pad_char);
	return (printed);
}

