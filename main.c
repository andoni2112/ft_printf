#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		a;
	int		b;
	int		n;
	char	*null_str;
	void	*null_ptr;

	n = 42;
	null_str = NULL;
	null_ptr = NULL;

	printf("\n--- TEST CHAR ---\n");
	a = ft_printf("char: %c\n", 'A');
	b = printf("char: %c\n", 'A');
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST STRING ---\n");
	a = ft_printf("str: %s\n", "hola");
	b = printf("str: %s\n", "hola");
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST NULL STRING ---\n");
	a = ft_printf("null str: %s\n", null_str);
	b = printf("null str: %s\n", null_str);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST DECIMAL ---\n");
	a = ft_printf("num: %d\n", 42);
	b = printf("num: %d\n", 42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("neg: %d\n", -42);
	b = printf("neg: %d\n", -42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("zero: %d\n", 0);
	b = printf("zero: %d\n", 0);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("int min: %d\n", INT_MIN);
	b = printf("int min: %d\n", INT_MIN);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("int max: %d\n", INT_MAX);
	b = printf("int max: %d\n", INT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST UNSIGNED ---\n");
	a = ft_printf("unsigned: %u\n", 42);
	b = printf("unsigned: %u\n", 42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("uint max: %u\n", UINT_MAX);
	b = printf("uint max: %u\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST HEX ---\n");
	a = ft_printf("hex lower: %x\n", 255);
	b = printf("hex lower: %x\n", 255);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("hex upper: %X\n", 255);
	b = printf("hex upper: %X\n", 255);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("hex zero: %x\n", 0);
	b = printf("hex zero: %x\n", 0);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("hex uint max: %x\n", UINT_MAX);
	b = printf("hex uint max: %x\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST POINTER ---\n");
	a = ft_printf("ptr: %p\n", &n);
	b = printf("ptr: %p\n", &n);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("null ptr: %p\n", null_ptr);
	b = printf("null ptr: %p\n", null_ptr);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST PERCENT ---\n");
	a = ft_printf("percent: %%\n");
	b = printf("percent: %%\n");
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TEST MIXED ---\n");
	a = ft_printf("mix: %s %c %d %i %u %x %X %% %p\n",
			"hola", 'A', -42, 42, 3000000000u, 255, 255, &n);
	b = printf("mix: %s %c %d %i %u %x %X %% %p\n",
			"hola", 'A', -42, 42, 3000000000u, 255, 255, &n);
	printf("ft_printf: %d | printf: %d\n", a, b);

	return (0);
}