/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:13:37 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/12 09:52:19 by julcleme         ###   ########lyon.fr   */
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

t_format	parse_format(char *str, size_t *i);

int			ft_putnbr_count(int nb, t_format f);
int			ft_putstr_count(char *str, t_format f);
int			ft_putchar_count(char c, t_format f);
int			ft_uint_putnbr_count(unsigned int nb, t_format f);
int			ft_putptr_count(void *ptr, t_format f);

int			display_hex(size_t nb, int in_lowercase);

int			ft_printf(const char *s, ...) __attribute__((format(printf, 1, 2)));

#endif