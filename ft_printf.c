/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:51:22 by kali              #+#    #+#             */
/*   Updated: 2025/11/11 00:25:45 by kali             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdarg.h> 

void	display_hex(size_t nb, int in_lowercase)
{
	char	output;

	if (nb == 0)
		return ;
	display_hex(nb / 16, in_lowercase);
	output = nb % 16;
	if (output >= 10)
		output += ('A' + 32 * (in_lowercase != 0)) - 10;
	else
		output += '0';
	ft_putchar_fd(output, 1);
}

static int	print_format(char *type, va_list args)
{
	if (!type || !type[1])
		return (-1);
	if (type[1] == '%')
		ft_putchar_fd('%', 1);
	else if (type[1] == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	else if (type[1] == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (type[1] == 'p')
	{
		size_t nb = (size_t)va_arg(args, size_t);
		if (nb < 0)
			ft_putchar_fd('-', 1);
		ft_putstr_fd("0x", 1);
		display_hex(nb, 1);
	}
	else if (type[1] == 'd' || type[1] == 'i')
		ft_putnbr_fd((size_t)va_arg(args, int), 1);
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
		//printf("=>%c\n", ((char *)format)[i]);
		if (((char *)format)[i] == '%')
		{
			if (print_format(&((char *)format)[i], &args) < 0)
				return (-1);
			i++;
		}
		else
			ft_putchar_fd(((char *)format)[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}

void	main(void)
{
	ft_printf("Hello World! I'm %culcleme and I'm %s\nAnd now I'm a student at %i for the next %d years!\n", 'j', "18 years old!", 42, 5);
	char	*str = "This str is located at address %p\n";
	ft_printf(str, str);
}