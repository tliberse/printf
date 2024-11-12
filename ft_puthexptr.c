/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:45:12 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/12 16:55:59 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthexptr(void *p)
{
	int	count;

	count = 0;
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_putnbrhex_low((unsigned long long)p);
	return (count);
}

// int main(void)
// {
// 	int num = 13;
// 	void *p = &num;
// 	ft_puthexptr(p);
// }