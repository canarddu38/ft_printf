/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:13:37 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/11 15:41:54 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h> 

int	ft_putnbr_fd_count(int nb, int fd);
int	ft_putstr_fd_count(char *str, int fd);
int	ft_putchar_fd_count(char c, int fd);
int	ft_unsigned_putnbr_fd_count(unsigned int nb, int fd);

int	ft_printf(const char *format, ...);

#endif