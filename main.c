#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	count;

	count = ft_printf("Hola Andoni\n");
	printf("ft_printf ha devuelto: %d\n", count);
	return (0);
}
