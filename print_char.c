#include "main.h"

/**
 * print_char - Prints character
 *
 * @list: list of arguments
 *
 * Return: return amount of printed characters
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
