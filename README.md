*Este proyecto ha sido creado como parte del currículo de 42 por andpascu.*

# ft_printf

## Descripción

`ft_printf` es un proyecto de 42 cuyo objetivo es reimplementar una versión simplificada de la función `printf` de la librería estándar de C.

La función principal del proyecto es:

```c
int	ft_printf(const char *format, ...);
```

Esta función escribe texto en la salida estándar y devuelve el número total de caracteres impresos.

La parte obligatoria del proyecto gestiona las siguientes conversiones:

- `%c`: imprime un carácter.
- `%s`: imprime una cadena de caracteres.
- `%p`: imprime un puntero en formato hexadecimal.
- `%d`: imprime un número decimal con signo.
- `%i`: imprime un entero en base 10.
- `%u`: imprime un número decimal sin signo.
- `%x`: imprime un número hexadecimal en minúsculas.
- `%X`: imprime un número hexadecimal en mayúsculas.
- `%%`: imprime el símbolo `%`.

## Instrucciones

Para compilar la librería:

```bash
make
```

Esto genera el archivo:

```bash
libftprintf.a
```

Para eliminar los archivos objeto:

```bash
make clean
```

Para eliminar los archivos objeto y la librería:

```bash
make fclean
```

Para recompilar desde cero:

```bash
make re
```

Ejemplo de uso con un archivo `main.c` externo:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hola %s, número: %d\n", "mundo", 42);
	return (0);
}
```

Compilación del ejemplo:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```

## Estructura del proyecto

El proyecto está dividido en funciones pequeñas para que el código sea más claro, mantenible y fácil de revisar.

- `ft_printf.c`: recorre el string de formato, detecta los `%` y acumula el número de caracteres impresos.
- `ft_format.c`: decide qué función auxiliar debe ejecutarse según el especificador encontrado.
- `ft_putchar.c`: imprime un único carácter.
- `ft_putstr.c`: imprime una cadena de caracteres y gestiona el caso `NULL`.
- `ft_putnbr.c`: imprime enteros con signo en base 10.
- `ft_putunsigned.c`: imprime enteros sin signo en base 10.
- `ft_puthex.c`: imprime números en hexadecimal, tanto en minúsculas como en mayúsculas.
- `ft_putptr.c`: imprime punteros en hexadecimal con el prefijo `0x`.
- `ft_printf.h`: contiene los prototipos de las funciones y los includes necesarios.
- `Makefile`: compila los archivos fuente y genera la librería `libftprintf.a`.

## Elección del algoritmo

La función `ft_printf` recorre el string `format` carácter por carácter.

Si el carácter actual no es `%`, se imprime directamente usando `ft_putchar`.

Si se encuentra un `%`, se analiza el siguiente carácter para saber qué conversión hay que realizar. Esa decisión se delega en `ft_format`, que llama a la función auxiliar correspondiente.

Cada función auxiliar devuelve el número de caracteres que ha escrito. De esta forma, `ft_printf` puede acumular el total y devolver un valor equivalente al de `printf`.

Para imprimir números se utiliza recursividad. El número se divide entre su base correspondiente hasta llegar al dígito más significativo. Después, al volver de las llamadas recursivas, los dígitos se imprimen en el orden correcto.

Para los enteros decimales se usa base 10.

Para los valores hexadecimales y punteros se usa base 16.

En el caso de los enteros con signo, se convierte el valor a `long` para gestionar correctamente el caso de `INT_MIN`.

## Recursos

- Manual de `printf`.
- Manual de `write`.
- Documentación de funciones variádicas en C.
- Uso de `va_list`, `va_start`, `va_arg` y `va_end`.
- Tests comparativos entre `printf` y `ft_printf`.
- Páginas de manual de C disponibles con `man`.

## Uso de IA

Se ha utilizado IA como apoyo para comprender el funcionamiento general del proyecto, dividir el desarrollo en fases, resolver dudas conceptuales y preparar tests comparativos.

El código final ha sido escrito, probado y revisado manualmente, asegurando la comprensión de cada función, del flujo principal de `ft_printf` y del uso de argumentos variables.