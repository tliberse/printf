/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:15:07 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/22 14:17:41 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex_up(unsigned int n)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_putnbrhex_up(n / 16);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}

// int main(void)
// {
// 	ft_putnbrhex_up(13);
// }
