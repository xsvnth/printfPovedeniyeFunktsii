/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 19:47:27 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 16:12:12 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long)ptr, 0);
	return (count);
}
// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	char	*s;
// 	char	x;
// 	int		r[] = {23, 4, 432, 3, 4};
//
// 	a = 9;
// 	b = 11;
// 	s = "dfghj";
// 	x = 'd';
// 	ft_putptr(&a);
// 	write(1, "\n", 1);
// 	ft_putptr(&b);
// 	write(1, "\n", 1);
// 	ft_putptr(s);
// 	write(1, "\n", 1);
// 	ft_putptr(&x);
// 	write(1, "\n", 1);
// 	ft_putptr(r);
// 	write(1, "\n", 1);
// 	ft_putptr(NULL);
// 	write(1, "\n", 1);
// }
