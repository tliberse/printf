/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliberse <tliberse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:50:48 by tliberse          #+#    #+#             */
/*   Updated: 2024/11/12 17:00:18 by tliberse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(va_list args, const char format)
{
	int	print;

	print = 0;
	if (format == 'c')
		print += ft_putchar(va_arg(args, int));
	if (format == 's')
		print += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		print += ft_puthexptr(va_arg(args, void *));
	if (format == 'd' || format == 'i')
		print += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		print += ft_putunbr(va_arg(args, unsigned int));
	if (format == 'x')
		print += ft_putnbrhex_low(va_arg(args, unsigned int));
	if (format == 'X')
		print += ft_putnbrhex_up(va_arg(args, unsigned int));
	if (format == '%')
		print += ft_putchar('%');
	return (print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		print;

	i = 0;
	print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print += ft_format(args, format[i + 1]);
			i++;
		}
		else
		{
			print += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (print);
}

// int main(void)
// {
// 	ft_printf("Character: %c\n", 'A');
// 	ft_printf("String: %s\n", "j'ai faim!");
// 	ft_printf("Pointer: %p\n", &main);
// 	ft_printf("Integer: %d\n", 42);
// 	ft_printf("Unsigned: %u\n", 12345);
// 	ft_printf("Hex low: %x\n", -255);
// 	ft_printf("Hex up: %X\n", 255);
// 	ft_printf("Pct: %%\n");
// 	return (0);
// }