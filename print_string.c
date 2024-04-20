#include "main.h"

/**
 * print_string - Prints a string
 * @args: Arguments
 *
 * Return: A string
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars;
	printed_chars = 0;
	
	if (str == NULL)
        str = "(null)";
	
	while (*str)
	{
        printed_chars += _putchar(*str);
        str++;
    	}

    	return printed_chars;
}
