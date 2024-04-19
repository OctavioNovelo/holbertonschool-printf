#include "main.h"
/**
 * print_percent - Prints character "%"
 * @args: Arguments
 *
 * Return: Character "%"
 */

int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
