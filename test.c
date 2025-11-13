/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcleme <julcleme@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:15:36 by julcleme          #+#    #+#             */
/*   Updated: 2025/11/13 17:01:15 by julcleme         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf_bonus.h"

void    test(int a, int b)
{
    if (a != b)
	{
		printf("\e[31mTEST FAILED!\e[0m\n");
        exit(1);
	}
}

int main(void)
{
	int r1;
    int r2;

	printf("===== TESTING %%c =====\n");
	r1 =    printf("printf: [%c]\n", 'A');
	r2 = ft_printf("printf: [%c]\n", 'A');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%c %c %c]\n", '0', '\0', 'Z');
	r2 = ft_printf("printf: [%c %c %c]\n", '0', '\0', 'Z');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%s =====\n");
	r1 =    printf("printf: [%s]\n", "Hello world!");
	r2 = ft_printf("printf: [%s]\n", "Hello world!");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%s]\n", "");
	r2 = ft_printf("printf: [%s]\n", "");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%s]\n", (char *)0);
	r2 = ft_printf("printf: [%s]\n", (char *)0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
	int	i578 = 26525424;
	r1 =    printf("printf: [%i]\n", i578);
	r2 = ft_printf("printf: [%i]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
	i578 = 0;
	r1 =    printf("printf: [%i]\n", i578);
	r2 = ft_printf("printf: [%i]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);


	printf("===== TESTING %%x / %%X =====\n");
	i578 = 0;
	r1 =    printf("printf: [%x]\n", i578);
	r2 = ft_printf("printf: [%x]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	i578 = 0;
	r1 =    printf("printf: [%X]\n", i578);
	r2 = ft_printf("printf: [%X]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	i578 = -255;
	r1 =    printf("printf: [%X]\n", i578);
	r2 = ft_printf("printf: [%X]\n", i578);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);


	printf("===== TESTING %%p =====\n");
	void *ptr = &r1;
	r1 =    printf("printf: [%p]\n", ptr);
	r2 = ft_printf("printf: [%p]\n", ptr);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	ptr = NULL;
	r1 =    printf("printf: [%p]\n", ptr);
	r2 = ft_printf("printf: [%p]\n", ptr);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%d / %%i =====\n");
	r1 =    printf("printf: [%d]\n", 42);
	r2 = ft_printf("printf: [%d]\n", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%i]\n", -42);
	r2 = ft_printf("printf: [%i]\n", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%d]\n", INT_MAX);
	r2 = ft_printf("printf: [%d]\n", INT_MAX);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%d]\n", INT_MIN);
	r2 = ft_printf("printf: [%d]\n", INT_MIN);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%u =====\n");
	r1 =    printf("printf: [%u]\n", 0);
	r2 = ft_printf("printf: [%u]\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%u]\n", UINT_MAX);
	r2 = ft_printf("printf: [%u]\n", UINT_MAX);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%x / %%X =====\n");
	r1 =    printf("printf: [%x]\n", 3735928559u);
	r2 = ft_printf("printf: [%x]\n", 3735928559u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%X]\n", 3735928559u);
	r2 = ft_printf("printf: [%X]\n", 3735928559u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("printf: [%x]\n", 0);
	r2 = ft_printf("printf: [%x]\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%%% =====\n");
	r1 =    printf("printf: [%%]\n");
	r2 = ft_printf("printf: [%%]\n");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== COMBINED TESTS =====\n");
	r1 =    printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				   'A', "42", &r1, -42, 42u, 255, 255);
	r2 = ft_printf("printf: Char:%c | Str:%s | Ptr:%p | Int:%d | Unsigned:%u | Hex:%x | HEX:%X | %%\n",
				   'A', "42", &r1, -42, 42u, 255, 255);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== CUSTOM TESTS =====\n");
	r1 =    printf("%x %X negative\n", -1 -5945415416);
	r2 = ft_printf("%x %X negative\n", -1 -5945415416);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== NEGATIVE TESTS =====\n");
	r1 =    printf("all %c %p %d %i %u %%\n", -254, -254, -254, -254, -254);
	r2 = ft_printf("all %c %p %d %i %u %%\n", -254, -254, -254, -254, -254);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== NULL TESTS =====\n");
	r1 =    printf("hex %x %X\n", 0, 0);
	r2 = ft_printf("hex %x %X\n", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("int %i %d\n", 0, 0);
	r2 = ft_printf("int %i %d\n", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	r1 =    printf("all %c %s %p %d %i %u %%\n", 0, 0, 0, 0, 0);
	r2 = ft_printf("all %c %s %p %d %i %u %%\n", 0, 0, 0, 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== STRESS TEST =====\n");
	r1 =    printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	r2 = ft_printf("printf: %d %d %d %d %d %d %d %d\n", INT_MIN, -1000, -1, 0, 1, 1000, INT_MAX, 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("===== TESTING %%i / %%d =====\n");
    i578 = 26525424;
    r1 =    printf("printf: [%i]\n", i578);
    r2 = ft_printf("printf: [%i]\n", i578);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	printf("\e[32mSUCCESSFULLY PASSED MANDATORY TESTS\e[0m\n");

    printf("===== TESTING WIDTH / PRECISION =====\n");
    r1 =    printf("printf: [%10.5d]\n", 42);
    r2 = ft_printf("printf: [%10.5d]\n", 42);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING FLAGS '-' AND '0' =====\n");
    r1 =    printf("printf: [%-08d]\n", 123);
    r2 = ft_printf("printf: [%-08d]\n", 123);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING '+' AND ' ' FLAGS =====\n");
    r1 =    printf("printf: [%+d] [% d]\n", 42, 42);
    r2 = ft_printf("printf: [%+d] [% d]\n", 42, 42);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING '#' FLAG =====\n");
    r1 =    printf("printf: [%#x] [%#X]\n", 255, 255);
    r2 = ft_printf("printf: [%#x] [%#X]\n", 255, 255);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING STRINGS =====\n");
    r1 =    printf("printf: [%10s]\n", "Hello");
    r2 = ft_printf("printf: [%10s]\n", "Hello");
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING PRECISION ON STRINGS =====\n");
    r1 =    printf("printf: [%.3s]\n", "Testing");
    r2 = ft_printf("printf: [%.3s]\n", "Testing");
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING HEX LOWER/UPPER =====\n");
    r1 =    printf("printf: [%x] [%X]\n", 3735928559u, 3735928559u);
    r2 = ft_printf("printf: [%x] [%X]\n", 3735928559u, 3735928559u);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING POINTERS =====\n");
    int a = 42;
    r1 =    printf("printf: [%p]\n", &a);
    r2 = ft_printf("printf: [%p]\n", &a);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

    printf("===== TESTING MIXED CONVERSIONS =====\n");
    r1 =    printf("printf: [%10d | %-8s | %#x | %p]\n", 42, "hi", 255, &a);
    r2 = ft_printf("printf: [%10d | %-8s | %#x | %p]\n", 42, "hi", 255, &a);
    printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
    test(r1, r2);

	char *s_hidden = "Hello World This is a Dull string...";
	int a01,a02,a03,a04,a05,a06,a07,a08,a09,a10,a11,a12;

	r1 = printf("%5%");
	r2 = ft_printf("%5%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5%");
	r2 = ft_printf("%-5%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-05%");
	r2 = ft_printf("%-05%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-p", &ncm_p);
	r2 = ft_printf("%-p", &ncm_p);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-x", 42);
	r2 = ft_printf("%-x", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.c", 'a');
	r2 = ft_printf("%.c", 'a');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-c", 'a');
	r2 = ft_printf("%-c", 'a');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-s", "hello");
	r2 = ft_printf("%-s", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-s", NULL);
	r2 = ft_printf("%-s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%23s", NULL);
	r2 = ft_printf("%23s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", NULL);
	r2 = ft_printf("%.s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%32s", "abc");
	r2 = ft_printf("%32s", "abc");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%16s", "nark nark");
	r2 = ft_printf("%16s", "nark nark");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5s", "goes over");
	r2 = ft_printf("%5s", "goes over");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-32s", "abc");
	r2 = ft_printf("%-32s", "abc");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-16s", "nark nark");
	r2 = ft_printf("%-16s", "nark nark");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5s", "goes over");
	r2 = ft_printf("%-5s", "goes over");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.7s", "hello");
	r2 = ft_printf("%.7s", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3s", "hello");
	r2 = ft_printf("%.3s", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", "hello");
	r2 = ft_printf("%.s", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0s", "hello");
	r2 = ft_printf("%.0s", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3s%.2s", "holla", "bitch");
	r2 = ft_printf("%.3s%.2s", "holla", "bitch");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.2s%.7s", "hello", "world");
	r2 = ft_printf("%.2s%.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.7s%.2s", "hello", "world");
	r2 = ft_printf("%.7s%.2s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5s%7s", "yo", "boi");
	r2 = ft_printf("%.5s%7s", "yo", "boi");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.5s", "yolo");
	r2 = ft_printf("%7.5s", "yolo");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.5s", "bombastic");
	r2 = ft_printf("%7.5s", "bombastic");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7.5s", "yolo");
	r2 = ft_printf("%-7.5s", "yolo");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7.5s", "tubular");
	r2 = ft_printf("%-7.5s", "tubular");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.7s%7.7s", "hello", "world");
	r2 = ft_printf("%7.7s%7.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7s%7.7s", "hello", "world");
	r2 = ft_printf("%3.7s%7.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.7s%3.7s", "hello", "world");
	r2 = ft_printf("%7.7s%3.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7s%3.7s", "hello", "world");
	r2 = ft_printf("%3.7s%3.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.3s%7.7s", "hello", "world");
	r2 = ft_printf("%7.3s%7.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3s%7.7s", "hello", "world");
	r2 = ft_printf("%3.3s%7.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.3s%3.7s", "hello", "world");
	r2 = ft_printf("%7.3s%3.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3s%3.7s", "hello", "world");
	r2 = ft_printf("%3.3s%3.7s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.7s%7.3s", "hello", "world");
	r2 = ft_printf("%7.7s%7.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7s%7.3s", "hello", "world");
	r2 = ft_printf("%3.7s%7.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.7s%3.3s", "hello", "world");
	r2 = ft_printf("%7.7s%3.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7s%3.3s", "hello", "world");
	r2 = ft_printf("%3.7s%3.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.3s%7.3s", "hello", "world");
	r2 = ft_printf("%7.3s%7.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3s%7.3s", "hello", "world");
	r2 = ft_printf("%3.3s%7.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7.3s%3.3s", "hello", "world");
	r2 = ft_printf("%7.3s%3.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3s%3.3s", "hello", "world");
	r2 = ft_printf("%3.3s%3.3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3s%3s", "hello", "world");
	r2 = ft_printf("%3s%3s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7s%5s", "hello", "world");
	r2 = ft_printf("%-7s%5s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7s%-5s", "hello", "world");
	r2 = ft_printf("%7s%-5s", "hello", "world");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%32s", NULL);
	r2 = ft_printf("%32s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2s", NULL);
	r2 = ft_printf("%2s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-32s", NULL);
	r2 = ft_printf("%-32s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-16s", NULL);
	r2 = ft_printf("%-16s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3s", NULL);
	r2 = ft_printf("%-3s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.9s", "NULL");
	r2 = ft_printf("%.9s", "NULL");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3s", "NULL");
	r2 = ft_printf("%.3s", "NULL");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", "NULL");
	r2 = ft_printf("%.s", "NULL");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0s", "NULL");
	r2 = ft_printf("%.0s", "NULL");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3s", s_hidden);
	r2 = ft_printf("%3s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%9s", s_hidden);
	r2 = ft_printf("%9s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", s_hidden);
	r2 = ft_printf("%.s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.9s", s_hidden);
	r2 = ft_printf("%.9s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.03s", s_hidden);
	r2 = ft_printf("%.03s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.09s", s_hidden);
	r2 = ft_printf("%.09s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.03s", NULL);
	r2 = ft_printf("%.03s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.09s", NULL);
	r2 = ft_printf("%.09s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.00s", "\0");
	r2 = ft_printf("%.00s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.01s", "\0");
	r2 = ft_printf("%.01s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.03s", "\0");
	r2 = ft_printf("%.03s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.09s", "\0");
	r2 = ft_printf("%.09s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.s", s_hidden);
	r2 = ft_printf("%3.s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.s", s_hidden);
	r2 = ft_printf("%10.s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.s", NULL);
	r2 = ft_printf("%3.s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.s", NULL);
	r2 = ft_printf("%10.s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.s", "\0");
	r2 = ft_printf("%1.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2.s", "\0");
	r2 = ft_printf("%2.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%9.s", "\0");
	r2 = ft_printf("%9.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.s", s_hidden);
	r2 = ft_printf("%-3.s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.s", s_hidden);
	r2 = ft_printf("%-8.s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.s", NULL);
	r2 = ft_printf("%-3.s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.s", NULL);
	r2 = ft_printf("%-8.s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-1.s", "\0");
	r2 = ft_printf("%-1.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2.s", "\0");
	r2 = ft_printf("%-2.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-6.s", "\0");
	r2 = ft_printf("%-6.s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.1s", s_hidden);
	r2 = ft_printf("%3.1s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.1s", s_hidden);
	r2 = ft_printf("%10.1s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.1s", NULL);
	r2 = ft_printf("%3.1s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%9.1s", NULL);
	r2 = ft_printf("%9.1s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.1s", s_hidden);
	r2 = ft_printf("%-3.1s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10.1s", s_hidden);
	r2 = ft_printf("%-10.1s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.1s", NULL);
	r2 = ft_printf("%-3.1s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-9.1s", NULL);
	r2 = ft_printf("%-9.1s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.1s", "\0");
	r2 = ft_printf("%-3.1s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-6.1s", "\0");
	r2 = ft_printf("%-6.1s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.6s", s_hidden);
	r2 = ft_printf("%3.6s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.6s", s_hidden);
	r2 = ft_printf("%20.6s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.6s", NULL);
	r2 = ft_printf("%3.6s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.6s", NULL);
	r2 = ft_printf("%20.6s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.6s", "\0");
	r2 = ft_printf("%3.6s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%6.6s", "\0");
	r2 = ft_printf("%6.6s", "\0");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.6s", s_hidden);
	r2 = ft_printf("%-3.6s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20.6s", s_hidden);
	r2 = ft_printf("%-20.6s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.8s", s_hidden);
	r2 = ft_printf("%-3.8s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10.8s", s_hidden);
	r2 = ft_printf("%-10.8s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.8s", NULL);
	r2 = ft_printf("%-3.8s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10.8s", NULL);
	r2 = ft_printf("%-10.8s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-.00s", s_hidden);
	r2 = ft_printf("%-.00s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-.09s", s_hidden);
	r2 = ft_printf("%-.09s", s_hidden);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7i", 33);
	r2 = ft_printf("%7i", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7i", -14);
	r2 = ft_printf("%7i", -14);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3i", 0);
	r2 = ft_printf("%3i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5i", 52625);
	r2 = ft_printf("%5i", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5i", -2562);
	r2 = ft_printf("%5i", -2562);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4i", 94827);
	r2 = ft_printf("%4i", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4i", -2464);
	r2 = ft_printf("%4i", -2464);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7i", 33);
	r2 = ft_printf("%-7i", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7i", -14);
	r2 = ft_printf("%-7i", -14);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3i", 0);
	r2 = ft_printf("%-3i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5i", 52625);
	r2 = ft_printf("%-5i", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5i", -2562);
	r2 = ft_printf("%-5i", -2562);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4i", 94827);
	r2 = ft_printf("%-4i", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4i", -2464);
	r2 = ft_printf("%-4i", -2464);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5i", 2);
	r2 = ft_printf("%.5i", 2);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.6i", -3);
	r2 = ft_printf("%.6i", -3);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3i", 0);
	r2 = ft_printf("%.3i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4i", 5263);
	r2 = ft_printf("%.4i", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4i", -2372);
	r2 = ft_printf("%.4i", -2372);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3i", 13862);
	r2 = ft_printf("%.3i", 13862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3i",-23646);
	r2 = ft_printf("%.3i",-23646);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05i", 43);
	r2 = ft_printf("%05i", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%07i", -54);
	r2 = ft_printf("%07i", -54);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03i", 0);
	r2 = ft_printf("%03i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03i", 634);
	r2 = ft_printf("%03i", 634);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%04i", -532);
	r2 = ft_printf("%04i", -532);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%04i", -4825);
	r2 = ft_printf("%04i", -4825);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5i", 34);
	r2 = ft_printf("%8.5i", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.5i", -216);
	r2 = ft_printf("%10.5i", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5i", 0);
	r2 = ft_printf("%8.5i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3i", 8375);
	r2 = ft_printf("%8.3i", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3i", -8473);
	r2 = ft_printf("%8.3i", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7i", 3267);
	r2 = ft_printf("%3.7i", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7i", -2375);
	r2 = ft_printf("%3.7i", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3i", 6983);
	r2 = ft_printf("%3.3i", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3i", -8462);
	r2 = ft_printf("%3.3i", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5i", 34);
	r2 = ft_printf("%-8.5i", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10.5i", -216);
	r2 = ft_printf("%-10.5i", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5i", 0);
	r2 = ft_printf("%-8.5i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3i", 8375);
	r2 = ft_printf("%-8.3i", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3i", -8473);
	r2 = ft_printf("%-8.3i", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.7i", 3267);
	r2 = ft_printf("%-3.7i", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.7i", -2375);
	r2 = ft_printf("%-3.7i", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3i", 6983);
	r2 = ft_printf("%-3.3i", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3i", -8462);
	r2 = ft_printf("%-3.3i", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5i", 34);
	r2 = ft_printf("%08.5i", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%010.5i", -216);
	r2 = ft_printf("%010.5i", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5i", 0);
	r2 = ft_printf("%08.5i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3i", 8375);
	r2 = ft_printf("%08.3i", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3i", -8473);
	r2 = ft_printf("%08.3i", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.7i", 3267);
	r2 = ft_printf("%03.7i", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.7i", -2375);
	r2 = ft_printf("%03.7i", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3i", 6983);
	r2 = ft_printf("%03.3i", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3i", -8462);
	r2 = ft_printf("%03.3i", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0i", 0);
	r2 = ft_printf("%.0i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.i", 0);
	r2 = ft_printf("%.i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0i", 0);
	r2 = ft_printf("%5.0i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.i", 0);
	r2 = ft_printf("%5.i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0i", 0);
	r2 = ft_printf("%-5.0i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.i", 0);
	r2 = ft_printf("%-5.i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7d", 33);
	r2 = ft_printf("%7d", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7d", -14);
	r2 = ft_printf("%7d", -14);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3d", 0);
	r2 = ft_printf("%3d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5d", 52625);
	r2 = ft_printf("%5d", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5d", -2562);
	r2 = ft_printf("%5d", -2562);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4d", 94827);
	r2 = ft_printf("%4d", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4d", -2464);
	r2 = ft_printf("%4d", -2464);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7d", 33);
	r2 = ft_printf("%-7d", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7d", -14);
	r2 = ft_printf("%-7d", -14);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3d", 0);
	r2 = ft_printf("%-3d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5d", 52625);
	r2 = ft_printf("%-5d", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5d", -2562);
	r2 = ft_printf("%-5d", -2562);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4d", 94827);
	r2 = ft_printf("%-4d", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4d", -2464);
	r2 = ft_printf("%-4d", -2464);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5d", 2);
	r2 = ft_printf("%.5d", 2);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.6d", -3);
	r2 = ft_printf("%.6d", -3);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3d", 0);
	r2 = ft_printf("%.3d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4d", 5263);
	r2 = ft_printf("%.4d", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4d", -2372);
	r2 = ft_printf("%.4d", -2372);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3d", 13862);
	r2 = ft_printf("%.3d", 13862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3d",-23646);
	r2 = ft_printf("%.3d",-23646);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05d", 43);
	r2 = ft_printf("%05d", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%07d", -54);
	r2 = ft_printf("%07d", -54);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03d", 0);
	r2 = ft_printf("%03d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03d", 634);
	r2 = ft_printf("%03d", 634);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%04d", -532);
	r2 = ft_printf("%04d", -532);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%04d", -4825);
	r2 = ft_printf("%04d", -4825);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5d", 34);
	r2 = ft_printf("%8.5d", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.5d", -216);
	r2 = ft_printf("%10.5d", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5d", 0);
	r2 = ft_printf("%8.5d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3d", 8375);
	r2 = ft_printf("%8.3d", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3d", -8473);
	r2 = ft_printf("%8.3d", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7d", 3267);
	r2 = ft_printf("%3.7d", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7d", -2375);
	r2 = ft_printf("%3.7d", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3d", 6983);
	r2 = ft_printf("%3.3d", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3d", -8462);
	r2 = ft_printf("%3.3d", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5d", 34);
	r2 = ft_printf("%-8.5d", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10.5d", -216);
	r2 = ft_printf("%-10.5d", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5d", 0);
	r2 = ft_printf("%-8.5d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3d", 8375);
	r2 = ft_printf("%-8.3d", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3d", -8473);
	r2 = ft_printf("%-8.3d", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.7d", 3267);
	r2 = ft_printf("%-3.7d", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.7d", -2375);
	r2 = ft_printf("%-3.7d", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3d", 6983);
	r2 = ft_printf("%-3.3d", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3d", -8462);
	r2 = ft_printf("%-3.3d", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5d", 34);
	r2 = ft_printf("%08.5d", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%010.5d", -216);
	r2 = ft_printf("%010.5d", -216);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5d", 0);
	r2 = ft_printf("%08.5d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3d", 8375);
	r2 = ft_printf("%08.3d", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3d", -8473);
	r2 = ft_printf("%08.3d", -8473);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.7d", 3267);
	r2 = ft_printf("%03.7d", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.7d", -2375);
	r2 = ft_printf("%03.7d", -2375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3d", 6983);
	r2 = ft_printf("%03.3d", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3d", -8462);
	r2 = ft_printf("%03.3d", -8462);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0d", 0);
	r2 = ft_printf("%.0d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.d", 0);
	r2 = ft_printf("%.d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0d", 0);
	r2 = ft_printf("%5.0d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.d", 0);
	r2 = ft_printf("%5.d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0d", 0);
	r2 = ft_printf("%-5.0d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.d", 0);
	r2 = ft_printf("%-5.d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7u", 33);
	r2 = ft_printf("%7u", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3u", 0);
	r2 = ft_printf("%3u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5u", 52625);
	r2 = ft_printf("%5u", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4u", 94827);
	r2 = ft_printf("%4u", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7u", 33);
	r2 = ft_printf("%-7u", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3u", 0);
	r2 = ft_printf("%-3u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5u", 52625);
	r2 = ft_printf("%-5u", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4u", 94827);
	r2 = ft_printf("%-4u", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5u", 2);
	r2 = ft_printf("%.5u", 2);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3u", 0);
	r2 = ft_printf("%.3u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4u", 5263);
	r2 = ft_printf("%.4u", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3u", 13862);
	r2 = ft_printf("%.3u", 13862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05u", 43);
	r2 = ft_printf("%05u", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03u", 0);
	r2 = ft_printf("%03u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03u", 634);
	r2 = ft_printf("%03u", 634);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5u", 34);
	r2 = ft_printf("%8.5u", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5u", 0);
	r2 = ft_printf("%8.5u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3u", 8375);
	r2 = ft_printf("%8.3u", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.7u", 3267);
	r2 = ft_printf("%3.7u", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3u", 6983);
	r2 = ft_printf("%3.3u", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5u", 34);
	r2 = ft_printf("%-8.5u", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5u", 0);
	r2 = ft_printf("%-8.5u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3u", 8375);
	r2 = ft_printf("%-8.3u", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.7u", 3267);
	r2 = ft_printf("%-3.7u", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3u", 6983);
	r2 = ft_printf("%-3.3u", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5u", 34);
	r2 = ft_printf("%08.5u", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5u", 0);
	r2 = ft_printf("%08.5u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3u", 8375);
	r2 = ft_printf("%08.3u", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.7u", 3267);
	r2 = ft_printf("%03.7u", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3u", 6983);
	r2 = ft_printf("%03.3u", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0u", 0);
	r2 = ft_printf("%.0u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.u", 0);
	r2 = ft_printf("%.u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0u", 0);
	r2 = ft_printf("%5.0u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.u", 0);
	r2 = ft_printf("%5.u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0u", 0);
	r2 = ft_printf("%-5.0u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.u", 0);
	r2 = ft_printf("%-5.u", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7x", 33);
	r2 = ft_printf("%7x", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3x", 0);
	r2 = ft_printf("%3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5x", 52625);
	r2 = ft_printf("%5x", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2x", 94827);
	r2 = ft_printf("%2x", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7x", 33);
	r2 = ft_printf("%-7x", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3x", 0);
	r2 = ft_printf("%-3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5x", 52625);
	r2 = ft_printf("%-5x", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4x", 9648627);
	r2 = ft_printf("%-4x", 9648627);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5x", 21);
	r2 = ft_printf("%.5x", 21);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3x", 0);
	r2 = ft_printf("%.3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4x", 5263);
	r2 = ft_printf("%.4x", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3x", 938862);
	r2 = ft_printf("%.3x", 938862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05x", 43);
	r2 = ft_printf("%05x", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03x", 0);
	r2 = ft_printf("%03x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03x", 698334);
	r2 = ft_printf("%03x", 698334);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5x", 34);
	r2 = ft_printf("%8.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5x", 0);
	r2 = ft_printf("%8.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3x", 8375);
	r2 = ft_printf("%8.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2.7x", 3267);
	r2 = ft_printf("%2.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3x", 6983);
	r2 = ft_printf("%3.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5x", 34);
	r2 = ft_printf("%-8.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5x", 0);
	r2 = ft_printf("%-8.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3x", 8375);
	r2 = ft_printf("%-8.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2.7x", 3267);
	r2 = ft_printf("%-2.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3x", 6983);
	r2 = ft_printf("%-3.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5x", 34);
	r2 = ft_printf("%08.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5x", 0);
	r2 = ft_printf("%08.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3x", 8375);
	r2 = ft_printf("%08.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%02.7x", 3267);
	r2 = ft_printf("%02.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3x", 6983);
	r2 = ft_printf("%03.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0x", 0);
	r2 = ft_printf("%.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.x", 0);
	r2 = ft_printf("%.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0x", 0);
	r2 = ft_printf("%5.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.x", 0);
	r2 = ft_printf("%5.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0x", 0);
	r2 = ft_printf("%-5.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.x", 0);
	r2 = ft_printf("%-5.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7x", 33);
	r2 = ft_printf("%7x", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3x", 0);
	r2 = ft_printf("%3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5x", 52625);
	r2 = ft_printf("%5x", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2x", 94827);
	r2 = ft_printf("%2x", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7x", 33);
	r2 = ft_printf("%-7x", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3x", 0);
	r2 = ft_printf("%-3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5x", 52625);
	r2 = ft_printf("%-5x", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4x", 9648627);
	r2 = ft_printf("%-4x", 9648627);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5x", 21);
	r2 = ft_printf("%.5x", 21);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3x", 0);
	r2 = ft_printf("%.3x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4x", 5263);
	r2 = ft_printf("%.4x", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3x", 938862);
	r2 = ft_printf("%.3x", 938862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05x", 43);
	r2 = ft_printf("%05x", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03x", 0);
	r2 = ft_printf("%03x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03x", 698334);
	r2 = ft_printf("%03x", 698334);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5x", 34);
	r2 = ft_printf("%8.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5x", 0);
	r2 = ft_printf("%8.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3x", 8375);
	r2 = ft_printf("%8.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2.7x", 3267);
	r2 = ft_printf("%2.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3x", 6983);
	r2 = ft_printf("%3.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5x", 34);
	r2 = ft_printf("%-8.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5x", 0);
	r2 = ft_printf("%-8.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3x", 8375);
	r2 = ft_printf("%-8.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2.7x", 3267);
	r2 = ft_printf("%-2.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3x", 6983);
	r2 = ft_printf("%-3.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5x", 34);
	r2 = ft_printf("%08.5x", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5x", 0);
	r2 = ft_printf("%08.5x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3x", 8375);
	r2 = ft_printf("%08.3x", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%02.7x", 3267);
	r2 = ft_printf("%02.7x", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3x", 6983);
	r2 = ft_printf("%03.3x", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0x", 0);
	r2 = ft_printf("%.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.x", 0);
	r2 = ft_printf("%.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0x", 0);
	r2 = ft_printf("%5.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.x", 0);
	r2 = ft_printf("%5.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0x", 0);
	r2 = ft_printf("%-5.0x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.x", 0);
	r2 = ft_printf("%-5.x", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7X", 33);
	r2 = ft_printf("%7X", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3X", 0);
	r2 = ft_printf("%3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5X", 52625);
	r2 = ft_printf("%5X", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2X", 94827);
	r2 = ft_printf("%2X", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7X", 33);
	r2 = ft_printf("%-7X", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3X", 0);
	r2 = ft_printf("%-3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5X", 52625);
	r2 = ft_printf("%-5X", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4X", 9648627);
	r2 = ft_printf("%-4X", 9648627);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5X", 21);
	r2 = ft_printf("%.5X", 21);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3X", 0);
	r2 = ft_printf("%.3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4X", 5263);
	r2 = ft_printf("%.4X", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3X", 938862);
	r2 = ft_printf("%.3X", 938862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05X", 43);
	r2 = ft_printf("%05X", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03X", 0);
	r2 = ft_printf("%03X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03X", 698334);
	r2 = ft_printf("%03X", 698334);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5X", 34);
	r2 = ft_printf("%8.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5X", 0);
	r2 = ft_printf("%8.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3X", 8375);
	r2 = ft_printf("%8.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2.7X", 3267);
	r2 = ft_printf("%2.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3X", 6983);
	r2 = ft_printf("%3.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5X", 34);
	r2 = ft_printf("%-8.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5X", 0);
	r2 = ft_printf("%-8.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3X", 8375);
	r2 = ft_printf("%-8.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2.7X", 3267);
	r2 = ft_printf("%-2.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3X", 6983);
	r2 = ft_printf("%-3.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5X", 34);
	r2 = ft_printf("%08.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5X", 0);
	r2 = ft_printf("%08.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3X", 8375);
	r2 = ft_printf("%08.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%02.7X", 3267);
	r2 = ft_printf("%02.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3X", 6983);
	r2 = ft_printf("%03.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%7X", 33);
	r2 = ft_printf("%7X", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3X", 0);
	r2 = ft_printf("%3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5X", 52625);
	r2 = ft_printf("%5X", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2X", 94827);
	r2 = ft_printf("%2X", 94827);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7X", 33);
	r2 = ft_printf("%-7X", 33);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3X", 0);
	r2 = ft_printf("%-3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5X", 52625);
	r2 = ft_printf("%-5X", 52625);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4X", 9648627);
	r2 = ft_printf("%-4X", 9648627);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5X", 21);
	r2 = ft_printf("%.5X", 21);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3X", 0);
	r2 = ft_printf("%.3X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4X", 5263);
	r2 = ft_printf("%.4X", 5263);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.3X", 938862);
	r2 = ft_printf("%.3X", 938862);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%05X", 43);
	r2 = ft_printf("%05X", 43);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03X", 0);
	r2 = ft_printf("%03X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03X", 698334);
	r2 = ft_printf("%03X", 698334);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5X", 34);
	r2 = ft_printf("%8.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.5X", 0);
	r2 = ft_printf("%8.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.3X", 8375);
	r2 = ft_printf("%8.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2.7X", 3267);
	r2 = ft_printf("%2.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%3.3X", 6983);
	r2 = ft_printf("%3.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5X", 34);
	r2 = ft_printf("%-8.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.5X", 0);
	r2 = ft_printf("%-8.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8.3X", 8375);
	r2 = ft_printf("%-8.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2.7X", 3267);
	r2 = ft_printf("%-2.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-3.3X", 6983);
	r2 = ft_printf("%-3.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5X", 34);
	r2 = ft_printf("%08.5X", 34);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.5X", 0);
	r2 = ft_printf("%08.5X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%08.3X", 8375);
	r2 = ft_printf("%08.3X", 8375);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%02.7X", 3267);
	r2 = ft_printf("%02.7X", 3267);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.3X", 6983);
	r2 = ft_printf("%03.3X", 6983);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0X", 0);
	r2 = ft_printf("%.0X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.X", 0);
	r2 = ft_printf("%.X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0X", 0);
	r2 = ft_printf("%5.0X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.X", 0);
	r2 = ft_printf("%5.X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.0X", 0);
	r2 = ft_printf("%-5.0X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5.X", 0);
	r2 = ft_printf("%-5.X", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	r2 = ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c//%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c", ' ','!','"','#','$', '%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':', ';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U', 'V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p', 'q','r','s','t','u','v','w','x','y','z','{','|','~');
	r2 = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c//%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c", ' ','!','"','#','$', '%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':', ';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U', 'V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p', 'q','r','s','t','u','v','w','x','y','z','{','|','~');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c", (char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12, (char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24, (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	r2 = ft_printf("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c", (char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12, (char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24, (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c", (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138, (char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149, (char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160, (char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171, (char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182, (char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193, (char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204, (char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215, (char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226, (char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237, (char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248, (char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);
	r2 = ft_printf("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c", (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138, (char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149, (char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160, (char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171, (char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182, (char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193, (char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204, (char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215, (char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226, (char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237, (char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248, (char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c//%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c", ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<', '=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y', 'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u', 'v','w','x','y','z','{','|','~');
	r2 = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c//%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c", ' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<', '=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y', 'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u', 'v','w','x','y','z','{','|','~');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11, (char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24, (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	r2 = ft_printf("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11, (char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24, (char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130, (char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141, (char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152, (char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163, (char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174, (char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185, (char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196, (char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207, (char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218, (char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229, (char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240, (char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251, (char)252,(char)253,(char)254,(char)255);
	r2 = ft_printf("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130, (char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141, (char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152, (char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163, (char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174, (char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185, (char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196, (char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207, (char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218, (char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229, (char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240, (char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251, (char)252,(char)253,(char)254,(char)255);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5c", '\0');
	r2 = ft_printf("%5c", '\0');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-5c", '\0');
	r2 = ft_printf("%-5c", '\0');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%10d}", 42);
	r2 = ft_printf("{%10d}", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%4d}", 10000);
	r2 = ft_printf("{%4d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%30d}", 10000);
	r2 = ft_printf("{%30d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%10d}", -42);
	r2 = ft_printf("{%10d}", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%3c}", 0);
	r2 = ft_printf("{%3c}", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%-13p}", &strlen);
	r2 = ft_printf("{%-13p}", &strlen);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%-12p}", &strlen);
	r2 = ft_printf("{%-12p}", &strlen);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%-10d}", 42);
	r2 = ft_printf("{%-10d}", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%-4d}", 10000);
	r2 = ft_printf("{%-4d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%-30d}", 10000);
	r2 = ft_printf("{%-30d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%010d}", -42);
	r2 = ft_printf("{%010d}", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%04d}", 10000);
	r2 = ft_printf("{%04d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%030d}", 10000);
	r2 = ft_printf("{%030d}", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%030x}", 0xFFFF);
	r2 = ft_printf("{%030x}", 0xFFFF);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%030X}", 0xFFFF);
	r2 = ft_printf("{%030X}", 0xFFFF);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("{%03.2d}", 0);
	r2 = ft_printf("{%03.2d}", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4d", 42);
	r2 = ft_printf("%.4d", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4d", 424242);
	r2 = ft_printf("%.4d", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4d", -424242);
	r2 = ft_printf("%.4d", -424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4d", 42);
	r2 = ft_printf("%15.4d", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4d", 424242);
	r2 = ft_printf("%15.4d", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.4d", 424242424);
	r2 = ft_printf("%8.4d", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4d", -42);
	r2 = ft_printf("%15.4d", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4d", -424242);
	r2 = ft_printf("%15.4d", -424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.4d", -424242424);
	r2 = ft_printf("%8.4d", -424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15d", 42);
	r2 = ft_printf("%4.15d", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15d", 424242);
	r2 = ft_printf("%4.15d", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.8d", 424242424);
	r2 = ft_printf("%4.8d", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15d", -42);
	r2 = ft_printf("%4.15d", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15d", -424242);
	r2 = ft_printf("%4.15d", -424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.8d", -424242424);
	r2 = ft_printf("%4.8d", -424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.d, %.0d", 0, 0);
	r2 = ft_printf("%.d, %.0d", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.10d", -42);
	r2 = ft_printf("%.10d", -42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4i", 42);
	r2 = ft_printf("%.4i", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4i", 42);
	r2 = ft_printf("%15.4i", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15i", 42);
	r2 = ft_printf("%4.15i", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.i, %.0i", 0, 0);
	r2 = ft_printf("%.i, %.0i", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4u", 42);
	r2 = ft_printf("%.4u", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4u", 424242);
	r2 = ft_printf("%.4u", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4u", 42);
	r2 = ft_printf("%15.4u", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4u", 424242);
	r2 = ft_printf("%15.4u", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.4u", 424242424);
	r2 = ft_printf("%8.4u", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15u", 42);
	r2 = ft_printf("%4.15u", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15u", 424242);
	r2 = ft_printf("%4.15u", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.8u", 424242424);
	r2 = ft_printf("%4.8u", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.u, %.0u", 0, 0);
	r2 = ft_printf("%.u, %.0u", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4x", 42);
	r2 = ft_printf("%.4x", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4x", 424242);
	r2 = ft_printf("%.4x", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4x", 42);
	r2 = ft_printf("%15.4x", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4x", 424242);
	r2 = ft_printf("%15.4x", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.4x", 424242424);
	r2 = ft_printf("%8.4x", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15x", 42);
	r2 = ft_printf("%4.15x", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15x", 42424242);
	r2 = ft_printf("%4.15x", 42424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.8x", 424242424);
	r2 = ft_printf("%4.8x", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.x, %.0x", 0, 0);
	r2 = ft_printf("%.x, %.0x", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4X", 42);
	r2 = ft_printf("%.4X", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4X", 424242);
	r2 = ft_printf("%.4X", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4X", 42);
	r2 = ft_printf("%15.4X", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4X", 424242);
	r2 = ft_printf("%15.4X", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%8.4X", 424242424);
	r2 = ft_printf("%8.4X", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15X", 42);
	r2 = ft_printf("%4.15X", 42);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15X", 424242);
	r2 = ft_printf("%4.15X", 424242);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.8X", 424242424);
	r2 = ft_printf("%4.8X", 424242424);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.X, %.0X", 0, 0);
	r2 = ft_printf("%.X, %.0X", 0, 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4s", "42");
	r2 = ft_printf("%.4s", "42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.4s", "42 is the answer");
	r2 = ft_printf("%.4s", "42 is the answer");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4s", "42");
	r2 = ft_printf("%15.4s", "42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4s", "I am 42");
	r2 = ft_printf("%15.4s", "I am 42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15.4s", "42 is the answer");
	r2 = ft_printf("%15.4s", "42 is the answer");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15s", "42");
	r2 = ft_printf("%4.15s", "42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15s", "I am 42");
	r2 = ft_printf("%4.15s", "I am 42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.15s", "42 is the answer");
	r2 = ft_printf("%4.15s", "42 is the answer");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%4.s", "42");
	r2 = ft_printf("%4.s", "42");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.c", 0);
	r2 = ft_printf("%.c", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("pp %.50d\n", 10000);
	r2 = ft_printf("pp %.50d\n", 10000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p1 %.4s\n", "cccc");
	r2 = ft_printf("p1 %.4s\n", "cccc");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p2 %.10s\n", "cccc");
	r2 = ft_printf("p2 %.10s\n", "cccc");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p3 %.4s\n", NULL);
	r2 = ft_printf("p3 %.4s\n", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p4 %.5s\n", "aaaaa");
	r2 = ft_printf("p4 %.5s\n", "aaaaa");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p5 %.3d\n", 100);
	r2 = ft_printf("p5 %.3d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p6 %.0d\n", 100);
	r2 = ft_printf("p6 %.0d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p7 %.4d\n", 100);
	r2 = ft_printf("p7 %.4d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p8 %.10d\n", 100);
	r2 = ft_printf("p8 %.10d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p9 %.50d\n", 100);
	r2 = ft_printf("p9 %.50d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p10 %.1d\n", 100);
	r2 = ft_printf("p10 %.1d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p11 %.3d\n", 100);
	r2 = ft_printf("p11 %.3d\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p12 %.0d\n", 0);
	r2 = ft_printf("p12 %.0d\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p13 %.3i\n", 100);
	r2 = ft_printf("p13 %.3i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p14 %.0i\n", 100);
	r2 = ft_printf("p14 %.0i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p15 %.4i\n", 100);
	r2 = ft_printf("p15 %.4i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p16 %.10i\n", 100);
	r2 = ft_printf("p16 %.10i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p17 %.50i\n", 100);
	r2 = ft_printf("p17 %.50i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p18 %.1i\n", 100);
	r2 = ft_printf("p18 %.1i\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p19 %.3x\n", 100);
	r2 = ft_printf("p19 %.3x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p20 %.0x\n", 0);
	r2 = ft_printf("p20 %.0x\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p21 %.3x\n", 100);
	r2 = ft_printf("p21 %.3x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p22 %.0x\n", 100);
	r2 = ft_printf("p22 %.0x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p23 %.4x\n", 100);
	r2 = ft_printf("p23 %.4x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p24 %.10x\n", 100);
	r2 = ft_printf("p24 %.10x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p25 %.50x\n", 100);
	r2 = ft_printf("p25 %.50x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p26 %.1x\n", 100);
	r2 = ft_printf("p26 %.1x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p27 %.3x\n", 100);
	r2 = ft_printf("p27 %.3x\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p28 %.0x\n", 0);
	r2 = ft_printf("p28 %.0x\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p29 %.3u\n", 100);
	r2 = ft_printf("p29 %.3u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p30 %.0u\n", 100);
	r2 = ft_printf("p30 %.0u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p31 %.4u\n", 100);
	r2 = ft_printf("p31 %.4u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p32 %.10u\n", 100);
	r2 = ft_printf("p32 %.10u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p33 %.50u\n", 100);
	r2 = ft_printf("p33 %.50u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p34 %.1u\n", 100);
	r2 = ft_printf("p34 %.1u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p35 %.3u\n", 100);
	r2 = ft_printf("p35 %.3u\n", 100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("p36 %.0u\n", 0);
	r2 = ft_printf("p36 %.0u\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%010x\n", 0);
	r2 = ft_printf("%010x\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%010x\n", 20);
	r2 = ft_printf("%010x\n", 20);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%010x\n", -20);
	r2 = ft_printf("%010x\n", -20);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10x\n", 20);
	r2 = ft_printf("%10x\n", 20);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10.2x\n", -20);
	r2 = ft_printf("%10.2x\n", -20);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-10x\n", 50);
	r2 = ft_printf("%-10x\n", 50);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-15x\n", 0);
	r2 = ft_printf("%-15x\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.1x\n", 500);
	r2 = ft_printf("%.1x\n", 500);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%40.50d\n", 50);
	r2 = ft_printf("%40.50d\n", 50);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-4d\n", -2464);
	r2 = ft_printf("%-4d\n", -2464);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.5d\n", -2372);
	r2 = ft_printf("%.5d\n", -2372);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%15p\n", NULL);
	r2 = ft_printf("%15p\n", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-15p\n", NULL);
	r2 = ft_printf("%-15p\n", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10c", 't');
	r2 = ft_printf("%10c", 't');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1c", 'y');
	r2 = ft_printf("%1c", 'y');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%50.2s", "Coucou");
	r2 = ft_printf("%50.2s", "Coucou");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%50.2s", NULL);
	r2 = ft_printf("%50.2s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.0s", "Hello");
	r2 = ft_printf("%5.0s", "Hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.1s", "Test");
	r2 = ft_printf("%.1s", "Test");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10s", NULL);
	r2 = ft_printf("%10s", NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%10s", "Ok");
	r2 = ft_printf("%10s", "Ok");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1p\n", &t);
	r2 = ft_printf("%1p\n", &t);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1p\n", &t);
	r2 = ft_printf("%1p\n", &t);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t1 %050d\n", 10);
	r2 = ft_printf("t1 %050d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t2 %-50d\n", 10);
	r2 = ft_printf("t2 %-50d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t3 %50.0d\n", 10);
	r2 = ft_printf("t3 %50.0d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t4 %50.50d\n", 10);
	r2 = ft_printf("t4 %50.50d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t5 %50.10d\n", 10);
	r2 = ft_printf("t5 %50.10d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t7 %1.50d\n", -10);
	r2 = ft_printf("t7 %1.50d\n", -10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t8 %1.50d\n", 10);
	r2 = ft_printf("t8 %1.50d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t9 %2.2d\n", 10);
	r2 = ft_printf("t9 %2.2d\n", 10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t10 %2.2d\n", -10);
	r2 = ft_printf("t10 %2.2d\n", -10);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t12 %.0d\n", 0);
	r2 = ft_printf("t12 %.0d\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t13 %01d\n", -20);
	r2 = ft_printf("t13 %01d\n", -20);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("t14 %10d\n", 1000);
	r2 = ft_printf("t14 %10d\n", 1000);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("31 This is an int : %.0d\n\n", 0);
	r2 = ft_printf("31 This is an int : %.0d\n\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("32 This is an int : %0d\n\n", 0);
	r2 = ft_printf("32 This is an int : %0d\n\n", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("percent 2 %12%");
	r2 = ft_printf("percent 2 %12%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("percent 3 %-12%");
	r2 = ft_printf("percent 3 %-12%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("percent 4 %0%");
	r2 = ft_printf("percent 4 %0%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("taaa %100s\n", "hello");
	r2 = ft_printf("taaa %100s\n", "hello");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1s", "Hallo heimur");
	r2 = ft_printf("%1s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1d", 1024);
	r2 = ft_printf("%1d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1d", -1024);
	r2 = ft_printf("%1d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1i", 1024);
	r2 = ft_printf("%1i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1i", -1024);
	r2 = ft_printf("%1i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1u", 1024u);
	r2 = ft_printf("%1u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1u", -1024u);
	r2 = ft_printf("%1u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1x", 0x1234abcdu);
	r2 = ft_printf("%1x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1x", -0x1234abcdu);
	r2 = ft_printf("%1x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1X", 0x1234abcdu);
	r2 = ft_printf("%1X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1X", -0x1234abcdu);
	r2 = ft_printf("%1X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1c", 'x');
	r2 = ft_printf("%1c", 'x');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20s", "Hallo");
	r2 = ft_printf("%20s", "Hallo");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20d", 1024);
	r2 = ft_printf("%20d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20d", -1024);
	r2 = ft_printf("%20d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20i", 1024);
	r2 = ft_printf("%20i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20i", -1024);
	r2 = ft_printf("%20i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20u", 1024u);
	r2 = ft_printf("%20u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20u", -1024u);
	r2 = ft_printf("%20u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20x", 0x1234abcdu);
	r2 = ft_printf("%20x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20x", -0x1234abcdu);
	r2 = ft_printf("%20x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20X", 0x1234abcdu);
	r2 = ft_printf("%20X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20X", -0x1234abcdu);
	r2 = ft_printf("%20X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20c", 'x');
	r2 = ft_printf("%20c", 'x');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20d", 1024);
	r2 = ft_printf("%-20d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20d", -1024);
	r2 = ft_printf("%-20d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20i", 1024);
	r2 = ft_printf("%-20i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20i", -1024);
	r2 = ft_printf("%-20i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20u", 1024u);
	r2 = ft_printf("%-20u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20u", -1024u);
	r2 = ft_printf("%-20u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20x", 0x1234abcdu);
	r2 = ft_printf("%-20x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20x", -0x1234abcdu);
	r2 = ft_printf("%-20x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20X", 0x1234abcdu);
	r2 = ft_printf("%-20X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20X", -0x1234abcdu);
	r2 = ft_printf("%-20X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-20c", 'x');
	r2 = ft_printf("%-20c", 'x');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020d", 1024);
	r2 = ft_printf("%020d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020d", -1024);
	r2 = ft_printf("%020d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020i", 1024);
	r2 = ft_printf("%020i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020i", -1024);
	r2 = ft_printf("%020i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020u", 1024u);
	r2 = ft_printf("%020u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020u", -1024u);
	r2 = ft_printf("%020u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020x", 0x1234abcdu);
	r2 = ft_printf("%020x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020x", -0x1234abcdu);
	r2 = ft_printf("%020x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020X", 0x1234abcdu);
	r2 = ft_printf("%020X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020X", -0x1234abcdu);
	r2 = ft_printf("%020X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20s", "Hallo heimur");
	r2 = ft_printf("%.20s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20d", 1024);
	r2 = ft_printf("%.20d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20d", -1024);
	r2 = ft_printf("%.20d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20i", 1024);
	r2 = ft_printf("%.20i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20i", -1024);
	r2 = ft_printf("%.20i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20u", 1024u);
	r2 = ft_printf("%.20u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20u", -1024u);
	r2 = ft_printf("%.20u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20x", 0x1234abcdu);
	r2 = ft_printf("%.20x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20x", -0x1234abcdu);
	r2 = ft_printf("%.20x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20X", 0x1234abcdu);
	r2 = ft_printf("%.20X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.20X", -0x1234abcdu);
	r2 = ft_printf("%.20X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5s", "Hallo heimur");
	r2 = ft_printf("%20.5s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5d", 1024);
	r2 = ft_printf("%20.5d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5d", -1024);
	r2 = ft_printf("%20.5d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5i", 1024);
	r2 = ft_printf("%20.5i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5i", -1024);
	r2 = ft_printf("%20.5i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5u", 1024u);
	r2 = ft_printf("%20.5u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5u", -1024u);
	r2 = ft_printf("%20.5u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5x", 0x1234abcdu);
	r2 = ft_printf("%20.5x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.10x", -0x1234abcdu);
	r2 = ft_printf("%20.10x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.5X", 0x1234abcdu);
	r2 = ft_printf("%20.5X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.10X", -0x1234abcdu);
	r2 = ft_printf("%20.10X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5d", 1024);
	r2 = ft_printf("%020.5d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5d", -1024);
	r2 = ft_printf("%020.5d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5i", 1024);
	r2 = ft_printf("%020.5i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5i", -1024);
	r2 = ft_printf("%020.5i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5u", 1024u);
	r2 = ft_printf("%020.5u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5u", -1024u);
	r2 = ft_printf("%020.5u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5x", 0x1234abcdu);
	r2 = ft_printf("%020.5x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.10x", -0x1234abcdu);
	r2 = ft_printf("%020.10x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.5X", 0x1234abcdu);
	r2 = ft_printf("%020.5X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%020.10X", -0x1234abcdu);
	r2 = ft_printf("%020.10X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.0s", "Hallo heimur");
	r2 = ft_printf("%.0s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0s", "Hallo heimur");
	r2 = ft_printf("%20.0s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", "Hallo heimur");
	r2 = ft_printf("%.s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.s", "Hallo heimur");
	r2 = ft_printf("%20.s", "Hallo heimur");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0d", 1024);
	r2 = ft_printf("%20.0d", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.d", -1024);
	r2 = ft_printf("%20.d", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.d", 0);
	r2 = ft_printf("%20.d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0i", 1024);
	r2 = ft_printf("%20.0i", 1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.i", -1024);
	r2 = ft_printf("%20.i", -1024);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.i", 0);
	r2 = ft_printf("%20.i", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.u", 1024u);
	r2 = ft_printf("%20.u", 1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0u", -1024u);
	r2 = ft_printf("%20.0u", -1024u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.u", 0u);
	r2 = ft_printf("%20.u", 0u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.x", 0x1234abcdu);
	r2 = ft_printf("%20.x", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0x", -0x1234abcdu);
	r2 = ft_printf("%20.0x", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.x", 0u);
	r2 = ft_printf("%20.x", 0u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.X", 0x1234abcdu);
	r2 = ft_printf("%20.X", 0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.0X", -0x1234abcdu);
	r2 = ft_printf("%20.0X", -0x1234abcdu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%20.X", 0u);
	r2 = ft_printf("%20.X", 0u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-153p%0110.8x%110p" ,(void*)17240180584784891087lu,2705171059u,(void*)1312307382483808423lu);
	r2 = ft_printf("%-153p%0110.8x%110p" ,(void*)17240180584784891087lu,2705171059u,(void*)1312307382483808423lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-163.23u%-68.0X" ,3421138903u,514939578u);
	r2 = ft_printf("%-163.23u%-68.0X" ,3421138903u,514939578u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%073.83x%00056.187d%-%%-78.56X%-104.170X" ,898043181u,1522753180,2837283853u,207713687u);
	r2 = ft_printf("%073.83x%00056.187d%-%%-78.56X%-104.170X" ,898043181u,1522753180,2837283853u,207713687u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-193.41d%-83.75X" ,-1402064983,2109137899u);
	r2 = ft_printf("%-193.41d%-83.75X" ,-1402064983,2109137899u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--120.50d%-%%-112.167X%-32.65u" ,-1355834522,3814946551u,404243169u);
	r2 = ft_printf("%--120.50d%-%%-112.167X%-32.65u" ,-1355834522,3814946551u,404243169u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-108p" ,(void*)11646713326646154808lu);
	r2 = ft_printf("%-108p" ,(void*)11646713326646154808lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-45c%--157.185d" ,118,1175809301);
	r2 = ft_printf("%-45c%--157.185d" ,118,1175809301);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%052.88i%-87.137u%--81.25X%26c%--198.131i" ,1348141248,2480967409u,3367743035u,96,340172724);
	r2 = ft_printf("%052.88i%-87.137u%--81.25X%26c%--198.131i" ,1348141248,2480967409u,3367743035u,96,340172724);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-77.96u%-135.50d%-%%061.149u%-122.96u" ,735543458u,1423566439,3134965784u,2213547867u);
	r2 = ft_printf("%-77.96u%-135.50d%-%%061.149u%-122.96u" ,735543458u,1423566439,3134965784u,2213547867u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0163.109u%-140.69d%---91.148s%000132.141i%-52.170x" ,2109506632u,-1086209677,"\nmD^8<.q*'\rD",-1143516304,2879456117u);
	r2 = ft_printf("%0163.109u%-140.69d%---91.148s%000132.141i%-52.170x" ,2109506632u,-1086209677,"\nmD^8<.q*'\rD",-1143516304,2879456117u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0092.95X%139c%-61.167s" ,3726412835u,-8,"6en");
	r2 = ft_printf("%0092.95X%139c%-61.167s" ,3726412835u,-8,"6en");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--%%-171.35X" ,2239320121u);
	r2 = ft_printf("%--%%-171.35X" ,2239320121u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--12.68d%--3X" ,2072365217,1528716323u);
	r2 = ft_printf("%--12.68d%--3X" ,2072365217,1528716323u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0%%23.30s" ,")[Cq3YOj]+Q8\r{Z^UwxV\vUw\f+i");
	r2 = ft_printf("%0%%23.30s" ,")[Cq3YOj]+Q8\r{Z^UwxV\vUw\f+i");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--72c" ,118);
	r2 = ft_printf("%--72c" ,118);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0%%-100.142X%-156c%-163.122d" ,966917282u,116,-1334835467);
	r2 = ft_printf("%0%%-100.142X%-156c%-163.122d" ,966917282u,116,-1334835467);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-127.104s%-26.169d%--60.88i%142.52s" ,"",955786883,-1974652066,"d^ex<#[F\v>=ka/hj");
	r2 = ft_printf("%-127.104s%-26.169d%--60.88i%142.52s" ,"",955786883,-1974652066,"d^ex<#[F\v>=ka/hj");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--81p%-115c%59s%135p%-46.34s" ,(void*)1228459267589004209lu,75,"`-@y3g&n[4!L=",(void*)7434010127989266962lu,",\v{#*|<Z,|M.OWYN@A$+r%YM:OOX");
	r2 = ft_printf("%--81p%-115c%59s%135p%-46.34s" ,(void*)1228459267589004209lu,75,"`-@y3g&n[4!L=",(void*)7434010127989266962lu,",\v{#*|<Z,|M.OWYN@A$+r%YM:OOX");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--133.48i%-103.188u%0003.72X" ,1341200964,3945708301u,3224169818u);
	r2 = ft_printf("%--133.48i%-103.188u%0003.72X" ,1341200964,3945708301u,3224169818u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-.148d%-166.126d%--137p%131c%111.86s" ,-1733961224,-1148896912,(void*)17695841004645625598lu,-90,"v-Q/)ZI3");
	r2 = ft_printf("%-.148d%-166.126d%--137p%131c%111.86s" ,-1733961224,-1148896912,(void*)17695841004645625598lu,-90,"v-Q/)ZI3");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-9.53X%-59c%0110.72x%0019.4d" ,2443914393u,110,1020946345u,-1518145014);
	r2 = ft_printf("%-9.53X%-59c%0110.72x%0019.4d" ,2443914393u,110,1020946345u,-1518145014);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-122.82x%-184.83x" ,1982804060u,37439046u);
	r2 = ft_printf("%-122.82x%-184.83x" ,1982804060u,37439046u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-154.95d" ,1425408622);
	r2 = ft_printf("%-154.95d" ,1425408622);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0%%0104.20x%---176p%--8.25X%-120.98i" ,462982545u,(void*)2547223992875393254lu,1267937232u,640121608);
	r2 = ft_printf("%0%%0104.20x%---176p%--8.25X%-120.98i" ,462982545u,(void*)2547223992875393254lu,1267937232u,640121608);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-132.91u" ,2815174969u);
	r2 = ft_printf("%-132.91u" ,2815174969u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--34.169x%-153c%---%%-164p" ,516530274u,-113,(void*)9877588959652347135lu);
	r2 = ft_printf("%--34.169x%-153c%---%%-164p" ,516530274u,-113,(void*)9877588959652347135lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%090.196X%0197.108d" ,905350113u,-1350090454);
	r2 = ft_printf("%090.196X%0197.108d" ,905350113u,-1350090454);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--140.73x%-195.97X%-58.185u%-162.133X" ,3001074927u,363790737u,1318998644u,2446287384u);
	r2 = ft_printf("%--140.73x%-195.97X%-58.185u%-162.133X" ,3001074927u,363790737u,1318998644u,2446287384u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--139.146d%127.161s%--71p%--27.141d" ,-1822102494,"n=WLe.nEu0{",(void*)6771150153815206631lu,1561301744);
	r2 = ft_printf("%--139.146d%127.161s%--71p%--27.141d" ,-1822102494,"n=WLe.nEu0{",(void*)6771150153815206631lu,1561301744);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-110.138d%-%%0143.148u" ,2134772362,2739210354u);
	r2 = ft_printf("%-110.138d%-%%0143.148u" ,2134772362,2739210354u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%000117.56d%0119.133x" ,1122960589,1573350691u);
	r2 = ft_printf("%000117.56d%0119.133x" ,1122960589,1573350691u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-71.104x" ,1045587132u);
	r2 = ft_printf("%-71.104x" ,1045587132u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--%");
	r2 = ft_printf("%--%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00054.91x%-119.117s%.120s%-3.12X" ,2341589136u,"V0dP#8kjTEcV7&k(cX>QVDa","oUyFMC$9``PRmEAG|~@|`<^'Q@",198320040u);
	r2 = ft_printf("%00054.91x%-119.117s%.120s%-3.12X" ,2341589136u,"V0dP#8kjTEcV7&k(cX>QVDa","oUyFMC$9``PRmEAG|~@|`<^'Q@",198320040u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--%");
	r2 = ft_printf("%--%");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%03.160d" ,-1754262177);
	r2 = ft_printf("%03.160d" ,-1754262177);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-154.60i%---171.156X" ,-857650046,907002431u);
	r2 = ft_printf("%-154.60i%---171.156X" ,-857650046,907002431u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--132c" ,-100);
	r2 = ft_printf("%--132c" ,-100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%06.38i%-168.40X%0074.18d%-158p" ,514862160,1406013807u,-595638242,(void*)15381379978655233653lu);
	r2 = ft_printf("%06.38i%-168.40X%0074.18d%-158p" ,514862160,1406013807u,-595638242,(void*)15381379978655233653lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--99.86i%158.71s" ,-37593293,"`pz,\ne#.\v$HZjf");
	r2 = ft_printf("%--99.86i%158.71s" ,-37593293,"`pz,\ne#.\v$HZjf");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%---105p%-%%--150.i" ,(void*)5854188174500153960lu,-1646567843);
	r2 = ft_printf("%---105p%-%%--150.i" ,(void*)5854188174500153960lu,-1646567843);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--10.194d" ,-1338030583);
	r2 = ft_printf("%--10.194d" ,-1338030583);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%029.173i" ,1159327133);
	r2 = ft_printf("%029.173i" ,1159327133);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--%%-32.137d" ,333874076);
	r2 = ft_printf("%--%%-32.137d" ,333874076);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--144.6u%-44.61X%-%" ,1508130875u,1556874976u);
	r2 = ft_printf("%--144.6u%-44.61X%-%" ,1508130875u,1556874976u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--78c%051.181x" ,35,316390971u);
	r2 = ft_printf("%--78c%051.181x" ,35,316390971u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%197c%12p%013.i%--147.185x%-1c" ,7,(void*)18229185041105221837lu,-1488496170,703835510u,120);
	r2 = ft_printf("%197c%12p%013.i%--147.185x%-1c" ,7,(void*)18229185041105221837lu,-1488496170,703835510u,120);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00.92X" ,3980796628u);
	r2 = ft_printf("%00.92X" ,3980796628u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-38p%--.31i" ,(void*)4772992227276040767lu,-1118940749);
	r2 = ft_printf("%-38p%--.31i" ,(void*)4772992227276040767lu,-1118940749);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-52c%---163c%0%%050.35u" ,-60,-30,3953001178u);
	r2 = ft_printf("%-52c%---163c%0%%050.35u" ,-60,-30,3953001178u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%34c%--142.160x%--10.37i%--94.58u%-157c" ,62,639732752u,-1818745559,2508057613u,100);
	r2 = ft_printf("%34c%--142.160x%--10.37i%--94.58u%-157c" ,62,639732752u,-1818745559,2508057613u,100);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--79s" ,"Dy0\r3YL9v$VHM7Lv/q@Gz'ygHi^B");
	r2 = ft_printf("%--79s" ,"Dy0\r3YL9v$VHM7Lv/q@Gz'ygHi^B");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%121.64s%-3p%13.163s%-121.90u%00120.46u" ,"'^rPh{8S9)<x)F~vD@$)\nkT}bA-\\",(void*)2235944964447641287lu,"g$5|Xl'wi?..wz#\\s&$HNI[,stq~E",2648867901u,3988920245u);
	r2 = ft_printf("%121.64s%-3p%13.163s%-121.90u%00120.46u" ,"'^rPh{8S9)<x)F~vD@$)\nkT}bA-\\",(void*)2235944964447641287lu,"g$5|Xl'wi?..wz#\\s&$HNI[,stq~E",2648867901u,3988920245u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%102p" ,(void*)9473888934885903032lu);
	r2 = ft_printf("%102p" ,(void*)9473888934885903032lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-199.18X" ,2742775666u);
	r2 = ft_printf("%-199.18X" ,2742775666u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%117p%-44c%-156c%-88.109s%0%" ,(void*)8225290685743754462lu,-123,65,NULL);
	r2 = ft_printf("%117p%-44c%-156c%-88.109s%0%" ,(void*)8225290685743754462lu,-123,65,NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--%%--%%---34.36s" ,",3j\t$Hi`+u&YD");
	r2 = ft_printf("%--%%--%%---34.36s" ,",3j\t$Hi`+u&YD");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%91p%--8.179X%--190c" ,(void*)13930816918730035186lu,505873219u,9);
	r2 = ft_printf("%91p%--8.179X%--190c" ,(void*)13930816918730035186lu,505873219u,9);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-65.126x%-37p" ,34432908u,(void*)15470536329350159836lu);
	r2 = ft_printf("%-65.126x%-37p" ,34432908u,(void*)15470536329350159836lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--42.165x" ,989648346u);
	r2 = ft_printf("%--42.165x" ,989648346u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%000197.126d%-19.111u" ,1687714499,1138173642u);
	r2 = ft_printf("%000197.126d%-19.111u" ,1687714499,1138173642u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00035.176X%-177c" ,825037686u,-45);
	r2 = ft_printf("%00035.176X%-177c" ,825037686u,-45);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-13.177s%0190.186x%0111.11d%-94.27X" ,"EWm?S`Z.ZHC2&K&\r@\\+",2398140703u,-90107139,3852798010u);
	r2 = ft_printf("%-13.177s%0190.186x%0111.11d%-94.27X" ,"EWm?S`Z.ZHC2&K&\r@\\+",2398140703u,-90107139,3852798010u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%038.4x%97p%030.48X" ,3857355889u,(void*)807170435392081871lu,1801588532u);
	r2 = ft_printf("%038.4x%97p%030.48X" ,3857355889u,(void*)807170435392081871lu,1801588532u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-165.150s%0160.168i" ,"W(xKHU7D:2",1264678805);
	r2 = ft_printf("%-165.150s%0160.168i" ,"W(xKHU7D:2",1264678805);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--25.139X%---188.17u" ,1499406941u,3497438253u);
	r2 = ft_printf("%--25.139X%---188.17u" ,1499406941u,3497438253u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-164p" ,(void*)6169491224167215468lu);
	r2 = ft_printf("%-164p" ,(void*)6169491224167215468lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00065.197d%132p%-%%-173.71i%--1.32i" ,-699619784,(void*)4809237208452777030lu,366715426,-1301410622);
	r2 = ft_printf("%00065.197d%132p%-%%-173.71i%--1.32i" ,-699619784,(void*)4809237208452777030lu,366715426,-1301410622);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-148.128d%00161.191u" ,215065970,3610766615u);
	r2 = ft_printf("%-148.128d%00161.191u" ,215065970,3610766615u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-110.1x" ,3090231399u);
	r2 = ft_printf("%-110.1x" ,3090231399u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00070.99u%00142.132x%---78.52d%-147.134i%-%" ,1060731427u,715254811u,-1080597013,-611888681);
	r2 = ft_printf("%00070.99u%00142.132x%---78.52d%-147.134i%-%" ,1060731427u,715254811u,-1080597013,-611888681);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-189.X%000130.137d%092.60d" ,823761827u,-369802385,-444387222);
	r2 = ft_printf("%-189.X%000130.137d%092.60d" ,823761827u,-369802385,-444387222);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0168.128u%0054.92x%30.171s" ,2620195206u,1771128939u,NULL);
	r2 = ft_printf("%0168.128u%0054.92x%30.171s" ,2620195206u,1771128939u,NULL);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-186.138i%86p%-113c%--87p" ,-1320475933,(void*)11899625258064503923lu,-39,(void*)15206197846470084523lu);
	r2 = ft_printf("%-186.138i%86p%-113c%--87p" ,-1320475933,(void*)11899625258064503923lu,-39,(void*)15206197846470084523lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-29p%--%%-193.171d" ,(void*)18371325174281419847lu,-1239504524);
	r2 = ft_printf("%-29p%--%%-193.171d" ,(void*)18371325174281419847lu,-1239504524);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00057.46d" ,118178230);
	r2 = ft_printf("%00057.46d" ,118178230);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-106p%--%%---16.39i%-62.45s%032.34u" ,(void*)4820041568133212049lu,1496653732,"78iTF|2mbbziDh\n0^?Q0",3823859301u);
	r2 = ft_printf("%-106p%--%%---16.39i%-62.45s%032.34u" ,(void*)4820041568133212049lu,1496653732,"78iTF|2mbbziDh\n0^?Q0",3823859301u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%50c%-%" ,105);
	r2 = ft_printf("%50c%-%" ,105);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-%%0044.25d%---172.48X" ,699603934,2593531191u);
	r2 = ft_printf("%-%%0044.25d%---172.48X" ,699603934,2593531191u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00101.6i%-41.55d%-%%-76p%--81p" ,383803588,1279553359,(void*)11248044234994893080lu,(void*)8032604661431581565lu);
	r2 = ft_printf("%00101.6i%-41.55d%-%%-76p%--81p" ,383803588,1279553359,(void*)11248044234994893080lu,(void*)8032604661431581565lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%057.155d" ,-1801054431);
	r2 = ft_printf("%057.155d" ,-1801054431);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-%%35p" ,(void*)6242906840831513273lu);
	r2 = ft_printf("%-%%35p" ,(void*)6242906840831513273lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--90.110d%0029.192d" ,-1196377573,-1708785543);
	r2 = ft_printf("%--90.110d%0029.192d" ,-1196377573,-1708785543);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-66.31x%-38.140i%-%%-150c%--75.38x" ,782499398u,-1057971833,41,3516211351u);
	r2 = ft_printf("%-66.31x%-38.140i%-%%-150c%--75.38x" ,782499398u,-1057971833,41,3516211351u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-146p%61.188s%--4.45u%0101.43X" ,(void*)9385099357660773515lu,"AmHx.B%B(|@OR&y94wO",462406975u,1042322495u);
	r2 = ft_printf("%-146p%61.188s%--4.45u%0101.43X" ,(void*)9385099357660773515lu,"AmHx.B%B(|@OR&y94wO",462406975u,1042322495u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-%%0180.177d%--9.67X" ,-506067077,2568175332u);
	r2 = ft_printf("%-%%0180.177d%--9.67X" ,-506067077,2568175332u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-68.71X%0162.97d" ,1241688513u,198930151);
	r2 = ft_printf("%-68.71X%0162.97d" ,1241688513u,198930151);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%00083.93d%-55.41u%-53p%0184.141x%00095.8d" ,199982661,274355806u,(void*)5935165970550123490lu,84062795u,-1718426199);
	r2 = ft_printf("%00083.93d%-55.41u%-53p%0184.141x%00095.8d" ,199982661,274355806u,(void*)5935165970550123490lu,84062795u,-1718426199);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%---26.93u%0048.24u%168p%---%%--%" ,1674006569u,2231710712u,(void*)8652210935049373690lu);
	r2 = ft_printf("%---26.93u%0048.24u%168p%---%%--%" ,1674006569u,2231710712u,(void*)8652210935049373690lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-%%-86p%-75.65X%--%%0%" ,(void*)2090071458243268605lu,2822691287u);
	r2 = ft_printf("%-%%-86p%-75.65X%--%%0%" ,(void*)2090071458243268605lu,2822691287u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0162.19u%-163p" ,2075536297u,(void*)16464387670933811057lu);
	r2 = ft_printf("%0162.19u%-163p" ,2075536297u,(void*)16464387670933811057lu);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%--172c" ,108);
	r2 = ft_printf("%--172c" ,108);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0078.159x" ,3407745568u);
	r2 = ft_printf("%0078.159x" ,3407745568u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0%%-109.16x" ,3433046735u);
	r2 = ft_printf("%0%%-109.16x" ,3433046735u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-7c%0%%85c%-87.120X" ,107,-57,1853313014u);
	r2 = ft_printf("%-7c%0%%85c%-87.120X" ,107,-57,1853313014u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-33.88X%00103.16x%-%" ,4177285833u,2437427694u);
	r2 = ft_printf("%-33.88X%00103.16x%-%" ,4177285833u,2437427694u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-198.70x%-116.104x%0101.173d%-7.31X%-79.47s" ,902186210u,3193532977u,-1387281844,1700477656u,"J;l$\t_");
	r2 = ft_printf("%-198.70x%-116.104x%0101.173d%-7.31X%-79.47s" ,902186210u,3193532977u,-1387281844,1700477656u,"J;l$\t_");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%-85.11X%-164.72s%--95.140i%-140.1u" ,669769114u,"xKNSl>8b=|V<b",1218643716,3685229999u);
	r2 = ft_printf("%-85.11X%-164.72s%--95.140i%-140.1u" ,669769114u,"xKNSl>8b=|V<b",1218643716,3685229999u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%0199.116d%-10.132i%-184.98x%-186.60u" ,-1501266571,225545851,491710007u,1838412370u);
	r2 = ft_printf("%0199.116d%-10.132i%-184.98x%-186.60u" ,-1501266571,225545851,491710007u,1838412370u);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%23p%-164c" ,(void*)5251690933477523038lu,61);
	r2 = ft_printf("%23p%-164c" ,(void*)5251690933477523038lu,61);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.d", 1);
	r2 = ft_printf("%.d", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.d", 0);
	r2 = ft_printf("%.d", 0);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.u", 1);
	r2 = ft_printf("%.u", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.s", "aasf");
	r2 = ft_printf("%.s", "aasf");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.c", 'a');
	r2 = ft_printf("%.c", 'a');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.x", 0xee);
	r2 = ft_printf("%.x", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%.X", 0xee);
	r2 = ft_printf("%.X", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.d", 1);
	r2 = ft_printf("%1.d", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.u", 1);
	r2 = ft_printf("%1.u", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.s", "aasf");
	r2 = ft_printf("%1.s", "aasf");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.c", 'a');
	r2 = ft_printf("%1.c", 'a');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.x", 0xee);
	r2 = ft_printf("%1.x", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%1.X", 0xee);
	r2 = ft_printf("%1.X", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.d", 1);
	r2 = ft_printf("%5.d", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.u", 1);
	r2 = ft_printf("%5.u", 1);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.s", "aasf");
	r2 = ft_printf("%5.s", "aasf");
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.c", 'a');
	r2 = ft_printf("%5.c", 'a');
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.x", 0xee);
	r2 = ft_printf("%5.x", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("%5.X", 0xee);
	r2 = ft_printf("%5.X", 0xee);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("-->|%-16p|<-- ", (void*)0x1900);
	r2 = ft_printf("-->|%-16p|<-- ", (void*)0x1900);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);

	r1 = printf("-->|%-16p|<-- ", (void*)0x1900);
	r2 = ft_printf("-->|%-16p|<-- ", (void*)0x1900);
	printf("return printf: %d | return ft_printf: %d\n\n", r1, r2);
	test(r1, r2);



	

	printf("\e[32mSUCCESSFULLY PASSED ALL TESTS\e[0m\n");
	return 0;
}
