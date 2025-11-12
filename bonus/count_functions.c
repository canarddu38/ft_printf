/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:17:18 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 09:43:15 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putflags_rep(int already_printed, t_format f)
{
	int	i;

	i = 0;
	while (i < f.width - already_printed)
	{
		ft_putchar_fd(f.flags[0], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_count(int nb, t_format f)
{
	int	i;
	int	nb_copy;

	i = 0;
	nb_copy = nb;
	if (nb < 0)
		i++;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb /= 10;
	}
	ft_putflags_rep(i, f);
	ft_putnbr_fd(nb_copy, 1);
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

	if (str == 0)
		str = "(null)";
	i = ft_strlen(str);
	i += ft_putflags_rep(i, f);
	ft_putstr_fd(str, 1);
	return (i);
}

int	ft_putchar_count(char c, t_format f)
{
	int	i;

	i = ft_putflags_rep(1, f);
	i += 1;
	ft_putchar_fd(c, 1);
	return (i);
}

int	ft_putptr_count(void *ptr, t_format f)
{
	int	len;

	(void)f;
	len = 0;
	if (!ptr)
		return (ft_putstr_count("(nil)", f));
	len += ft_putstr_count("0x", f);
	len += display_hex((unsigned long)ptr, 1);
	return (len);
}
