/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:19:08 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 16:11:53 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putunbr(n / 10);
	c = n % 10 + '0';
	count += write(1, &c, 1);
	return (count);
}
// int	main(void)
// {
// 	ft_putunbr(4294967295);
// }
