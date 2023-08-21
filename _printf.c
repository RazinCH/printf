#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: string containing all characters
 *
 * Return: total of characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	convert_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	printed_chars = format_reciever(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
