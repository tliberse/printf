/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:45:12 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/22 14:38:31 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_putnbrhex_low_ptr(unsigned long long n)
// {
// 	int		count;
// 	char	*hex_digits;

// 	count = 0;
// 	hex_digits = "0123456789abcdef";
// 	if (n >= 16)
// 		count += ft_putnbrhex_low_ptr(n / 16);
// 	count += ft_putchar(hex_digits[n % 16]);
// 	return (count);
// }

int	ft_puthexptr(void *p)
{
	int	count;

	count = 0;
	if (p == 0)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_putnbrhex_low((unsigned long long)p);
	}
	return (count);
}

// int main(void)
// {
// 	int num = 13;
// 	void *p = &num;
// 	ft_puthexptr(p);
// }
