/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:13:37 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 10:06:33 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h> 

typedef struct s_format
{
	char	flags[6];
	int		width;
	int		precision;
	char	type;
}	t_format;

int			ft_putnbr_count(int nb);
int			ft_putstr_count(char *str);
int			ft_putchar_count(char c);
int			ft_uint_putnbr_count(unsigned int nb);
int			ft_putptr_count(void *ptr);

int			display_hex(size_t nb, int in_lowercase);

int			ft_printf(const char *s, ...) __attribute__((format(printf, 1, 2)));

#endif