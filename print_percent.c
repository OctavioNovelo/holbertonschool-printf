#include "main.h"
/**
 *
 */
int print_percent(char *str)
{
  if (str == NULL)
     {
       return NULL;
     }
  if (*str == '%')
    {
      _putchar('%');
      return 0;
    }
   return 0;
}
