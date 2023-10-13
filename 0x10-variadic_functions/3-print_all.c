#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints ints, floats, chars, doubles etc.
 * @format: format of the data to be printed.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);

					if (str == NULL)
					{
						str = "(nil)";
					}

					printf("%s%s", separator, str);
					break;
				}
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
