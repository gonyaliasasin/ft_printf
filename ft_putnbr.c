/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aogul <aogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:37:27 by aogul             #+#    #+#             */
/*   Updated: 2024/12/08 13:45:56 by aogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	char	c;
	long	size;

	size = 0;
	if (n < 0)
	{
		size = 1;
		n = n * -1;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		size += ft_putnbr(n / 10);
		size += ft_putnbr(n % 10);
	}
	else
	{
		c = '0' + n;
		size += write(1, &c, 1);
	}
	return (size);
}
