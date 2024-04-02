#include "main.h"

/**
 *
 */
int print_integer(va_list args)
{
    va_list args_copy;
    va_copy(args_copy, args);  
    int num = va_arg(args_copy, int);
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
        count += print_integer(args_copy);  
    }

    _putchar((num % 10) + '0');
    count++;

    va_end(args_copy); 
    return count;
}
