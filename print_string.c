#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_string - print a string
 * @s: va_list
 *
 * Return: the character otherwise (NULL)
 */
int print_string(va_list s)
{
	char *my_str;
	int d;

	my_str = va_arg(s, char*);

	if (my_str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (d = 0; my_str[d] != '\0'; d++)
		{
			_putchar(my_str[d]);
		}
	}
	return (d);
}
