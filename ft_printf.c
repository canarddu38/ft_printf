/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:51:22 by kali              #+#    #+#             */
/*   Updated: 2025/11/11 15:41:34 by julcleme         ###   ########lyon.fr   */
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

static int	print_format(char *type, va_list args)
{
	size_t	written_len;
	size_t	i;
	char	*str;

	written_len = 0;
	if (!type || !type[1])
		return (-1);
	if (type[1] == '%')
		return (ft_putchar_fd_count('%', 1));
	else if (type[1] == 'c')
		return (ft_putchar_fd_count((char)va_arg(args, int), 1));
	else if (type[1] == 's')
	{
		str = va_arg(args, char *);
		if (!str)
			str = "(null)";
		return (ft_putstr_fd_count(str, 1));
	}
	else if (type[1] == 'p' || type[1] == 'x' || type[1] == 'X')
	{
		i = (size_t)va_arg(args, size_t);
		if (i < 0)
			written_len += ft_putchar_fd_count('-', 1);
		if (i == 0)
		{
			if (type[1] == 'p')
				return (ft_putstr_fd_count("(nil)", 1));
			return (ft_putstr_fd_count("0", 1));
		}
		if (type[1] == 'p')
			written_len += ft_putstr_fd_count("0x", 1);
		return (written_len + display_hex(i, (type[1] == 'p' || type[1] == 'x')));
	}
	else if (type[1] == 'd' || type[1] == 'i')
		return (ft_putnbr_fd_count((int)va_arg(args, int), 1));
	else if (type[1] == 'u')
		return(ft_unsigned_putnbr_fd_count((unsigned int)va_arg(args, int), 1));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	j;
	size_t	written_len;

	i = 0;
	written_len = 0;
	va_start(args, format);
	while (((char *)format)[i])
	{
		if (((char *)format)[i] == '%')
		{
			j = print_format(&((char *)format)[i], args);
			if (j < 0)
				return (-1);
			written_len += j - 1;
			i++;
		}
		else
			ft_putchar_fd(((char *)format)[i], 1);
		written_len++;
		i++;
	}
	va_end(args);
	return (written_len);
}
