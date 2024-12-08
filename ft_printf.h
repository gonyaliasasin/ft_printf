/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:37:22 by aogul             #+#    #+#             */
/*   Updated: 2024/12/08 13:45:52 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_type(const char *str, size_t i, va_list args);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr(long n);
int	ft_hex(unsigned int num, char c);
int	ft_void_ptr(unsigned long long num);

#endif