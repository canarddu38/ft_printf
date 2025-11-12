/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:18 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 10:22:12 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_count(int nb)
{
	int	i;

	i = 0;
	ft_putnbr_fd(nb, 1);
	if (nb < 0)
		i++;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_uint_putnbr_count(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_uint_putnbr_count(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
	return (len + 1);
}

int	ft_putstr_count(char *str)
{
	if (str == 0)
		str = "(null)";
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_putchar_count(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putptr_count(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr_count("(nil)"));
	len += ft_putstr_count("0x");
	len += display_hex((unsigned long)ptr, 1);
	return (len);
}
