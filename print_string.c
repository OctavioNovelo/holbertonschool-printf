#include "main.h"
/**
 *
 */
int print_string(va_list args)
{
  char *str = va_arg(args, char *);

    if (str == NULL)
        return 0;

    int printed_chars = 0;
    while (*str)
    {
        printed_chars += _putchar(*str);
        str++;
    }

    return printed_chars;
}
