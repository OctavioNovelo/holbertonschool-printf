#include "main.h"

/**
 * print_integer - Print an integer.
 * @args: A va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */

int print_integer(va_list args)
/**{
    int num;
    int count = 0;

    num = va_arg(args, int);

    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    if (num / 10)
    {
        count += print_integer(args);
    }

    _putchar((num % 10) + '0');
    count++;

    return count;
}
*/
{
	int value;
	unsigned int abs, a, len;
	unsigned int countn = 1;

	len = 0;

	value = va_arg(args, int);

	if (value < 0)
	{
		len = len + _putchar('-');
		abs = value * -1;
	}
	else
		abs = value;

	a = abs;
	while (a > 9)
	{
		a = a / 10;
		countn = countn * 10;
	}
	while (countn >= 1)
	{
		len = len + _putchar(((abs / countn) % 10) + '0');
		countn = countn / 10;
	}
	return (len);
}
