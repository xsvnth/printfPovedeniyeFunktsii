/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <ahmelamr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:06:08 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/11/09 22:54:16 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int				a;
	unsigned int	b;
	int				c;
	int				s1;
	int				s2;
	unsigned int	d;
	int				*e;

	a = -2147483648;
	b = 4294967295;
	c = 0;
	d = 4294967295;
	e = NULL;
	ft_printf("%s\n", (char *)NULL);
	s1 = ft_printf("i think a %d's address is %p and its hex must be %x and it can be also a %X for blindies! and a %s must be %c%% this year!\n%u  %%%%\n", a, e, (unsigned int)c, (unsigned int)d, "", '\0',
			b);
	s2 = printf("i think a %d's address is %p and its hex must be %x and it can be also a %X for blindies! and a %s must be %c%% this year!\n%u  %%%%\n", a, e, (unsigned int)c, (unsigned int)d, "", '\0',
			b);
	ft_printf("%d\n", s1);
	ft_printf("%d\n", s1);
	printf("%d\n", s2);
	printf("%d\n", s2);
	ft_printf("%d\n", INT_MIN);
	ft_printf("%d\n", INT_MAX);
	ft_printf("%i\n", INT_MIN);
	ft_printf("%u\n", UINT_MAX);
	ft_printf("%x\n", UINT_MAX);
	ft_printf("%X\n", UINT_MAX);
	printf("%d\n", INT_MIN);
	printf("%d\n", INT_MAX);
	printf("%i\n", INT_MIN);
	printf("%u\n", UINT_MAX);
	printf("%x\n", UINT_MAX);
	printf("%X\n", UINT_MAX);
	ft_printf("d:%d i:%i u:%u x:%x X:%X\n", 0, 0, 0, 0, 0);
	ft_printf("s:%s c:%c p:%p\n", "", '\0', NULL);
	printf("d:%d i:%i u:%u x:%x X:%X\n", 0, 0, 0, 0, 0);
	printf("s:%s c:%c p:%p\n", "", '\0', NULL);
	s1 = ft_printf("s:%s c:%c p:%p\n", "", '\0', NULL);
	s2 = printf("s:%s c:%c p:%p\n", "", '\0', NULL);
	ft_printf("ft_printf count: %d\n", s1);
	printf("printf count: %d\n", s2);
	ft_printf("%%");
	ft_printf("%%%%");
	ft_printf("%%%%%%");
	ft_printf("%d%d%d", 1, 2, 3);
	ft_printf("%x%X%u", 42, 42, 42);
	printf("%%");
	printf("%%%%");
	printf("%%%%%%");
	printf("%d%d%d", 1, 2, 3);
	printf("%x%X%u", 42, 42, 42);
	// ft_printf("hello %q world\n");
	// ft_printf("100% done\n");
	// ft_printf("trailing percent: %");
	// printf("hello %q world\n");
	// printf("100% done\n");
	// printf("trailing percent: %");
	s1 = ft_printf("ABC");
	s2 = printf("ABC");
	ft_printf("\nft: %d | libc: %d\n", s1, s2);
	s1 = ft_printf("%d%s%x", -42, "hello", 255);
	s2 = printf("%d%s%x", -42, "hello", 255);
	ft_printf("\nft: %d | libc: %d\n", s1, s2);
	s1 = ft_printf("%c%c%c", 'A', '\0', 'B');
	s2 = printf("%c%c%c", 'A', '\0', 'B');
	ft_printf("\nft: %d | libc: %d\n", s1, s2);
}
