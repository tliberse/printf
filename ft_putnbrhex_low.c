/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrhex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:15:07 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/22 14:37:45 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrhex_low(unsigned long long n)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		count += ft_putnbrhex_low(n / 16);
	count += ft_putchar(hex_digits[n % 16]);
	return (count);
}

// int main(void)
// {
// 	ft_putnbrhex_low(16);
// }
