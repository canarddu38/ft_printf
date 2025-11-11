/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:51:22 by kali              #+#    #+#             */
/*   Updated: 2025/11/11 23:38:26 by kali             ###   ########lyon.fr   */
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
	unsigned int	i;

	if (!type || !type[1])
		return (-1);
	if (type[1] == '%')
		return (ft_putchar_count('%'));
	else if (type[1] == 'c')
		return (ft_putchar_count((char)va_arg(args, int)));
	else if (type[1] == 's')
		return (ft_putstr_count(va_arg(args, char *)));
	else if (type[1] == 'd' || type[1] == 'i')
		return (ft_putnbr_count((int)va_arg(args, int)));
	else if (type[1] == 'u')
		return (ft_uint_putnbr_count((unsigned int)va_arg(args, int)));
	else if (type[1] == 'p')
		return (ft_putptr_count((void *)va_arg(args, void *)));
	else if (type[1] == 'x' || type[1] == 'X')
	{
		i = (unsigned int)va_arg(args, unsigned int);
		if (i == 0)
			return (ft_putstr_count("0"));
		return (display_hex(i, (type[1] == 'x')));
	}
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (((char *)format)[i])
	{
		if (((char *)format)[i] == '%')
		{
			j = print_format(&((char *)format)[i], args);
			if (j < 0)
				return (-1);
			len += j - 1;
			i++;
		}
		else
			ft_putchar_fd(((char *)format)[i], 1);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
