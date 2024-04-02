#include "main.h"
/**
 *
 */
int print_string(va_list args)
{
  char *str = va_arg(args, char *);
  int printed_chars;
  printed_chars = 0;
    if (str == NULL)
        return 0;

    while (*str)
    {
        printed_chars += _putchar(*str);
        str++;
    }

    return printed_chars;
}
