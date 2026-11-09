/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:45:24 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 16:09:57 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex(unsigned long n, int uppercase);
int	ft_putptr(void *ptr);
#endif
