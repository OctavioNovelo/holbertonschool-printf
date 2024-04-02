#include "main.h"

/**
 * print_percent - Print a percent sign if the input string is a percent sign.
 * @str: A string containing the character to print.
 *
 * Return: 1 if a percent sign is printed, otherwise 0.
 */
int print_percent(char *str)
{
    if (str == NULL)
    {
        return 0;
    }

    if (*str == '%')
    {
        _putchar('%');
        return 1;
    }

    return 0;
}
