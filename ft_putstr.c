/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 22:19:47 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 22:19:50 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		count += write(1, "(null)", 6);
		return (count);
	}
	while (*s)
		count += write(1, s++, 1);
	return (count);
}
// int	main(void)
// {
// 	ft_putstr("we r done \n");
// }
