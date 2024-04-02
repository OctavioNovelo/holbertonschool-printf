#include "main.h"
/**
 *
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
