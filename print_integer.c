#include "main.h"
/**
 *
 */
int print_integer(va_list args)
{
    int num = va_arg(args, int);
    int count = 0;

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
        count += print_integer(num / 10);
    }

    _putchar((num % 10) + '0');
    count++;

    return count;
}
