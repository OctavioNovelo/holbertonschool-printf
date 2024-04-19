#include "main.h"

/**
 * print_char - Prints a character
 * @args: Arguments
 *
 * Return: A character
 */

int print_char(va_list args)
{
	int character = va_arg(args, int);
	_putchar(character);
	return (1);
}
