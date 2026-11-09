/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:31:57 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 22:20:27 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int uppercase)
{
	char	*x;
	char	*ux;
	char	c;
	int		count;

	count = 0;
	x = "0123456789abcdef";
	ux = "0123456789ABCDEF";
	if (n > 15)
		count += ft_puthex(n / 16, uppercase);
	if (uppercase)
		c = ux[n % 16];
	else
		c = x[n % 16];
	count += write(1, &c, 1);
	return (count);
}
// int	main(void)
// {
// 	ft_puthex(0, 0); // 0
// 	write(1, "\n", 1);
// 	ft_puthex(10, 0); // a
// 	write(1, "\n", 1);
// 	ft_puthex(42, 0); // 2a
// 	write(1, "\n", 1);
// 	ft_puthex(42, 1); // 2A
// 	write(1, "\n", 1);
// 	ft_puthex(255, 0); // ff
// 	write(1, "\n", 1);
// 	ft_puthex(4294967295U, 1); // FFFFFFFF
// 	write(1, "\n", 1);
// }
