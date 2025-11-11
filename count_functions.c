/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:18 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/11 15:41:19 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd_count(int nb, int fd)
{
	int	i;

	i = 0;
	ft_putnbr_fd(nb, fd);
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

int	ft_unsigned_putnbr_fd_count(unsigned int nb, int fd)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_unsigned_putnbr_fd_count(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
	return (len + 1);
}

int	ft_putstr_fd_count(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}

int	ft_putchar_fd_count(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}
