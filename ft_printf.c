/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:51:22 by kali              #+#    #+#             */
/*   Updated: 2025/11/10 23:34:24 by kali             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h> 

static int	print_format(char *type, va_list args)
{
	char	*output;
	size_t	output_len;
	
	output_len = 0;
	if (!type || !type[1])
		return (-1);
	if (type[1] == '%')
		ft_putchar_fd('%', 1);
	else if (type[1] == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	else if (type[1] == 's')
	{
		output = va_arg(args, char *);
		output_len = ft_strlen(output);
		ft_putstr_fd(output, 1);
		return (output_len);
	}
	else if (type[1] == 'd' || type[1] == 'i')
	{
		ft_putnbr_fd(va_arg(args, int), 1);
	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	char	*output;
	size_t	i;
	size_t	j;

	i = 0;
	va_start(args, format);
	while (((char *)format)[i])
	{
		if (((char *)format)[i] == '%')
		{
			j = print_format(&((char *)format)[i], &args);
			if (j >= 0)
				i += j + 1;
			else
				return (-1);
		}
		else
		{
			ft_putchar_fd(((char *)format)[i], 1);
			i++;
		}
	}
	va_end(args);
	return (i);
}

void	main(void)
{
	ft_printf("Hello World! I'm %cules and I'm %s\n[]", 'j', "18 years old!");
}