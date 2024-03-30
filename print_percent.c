#include "main.h"
/**
 *
 */
int print_percent(va_list args)
{
   char *str = va_arg(args, char *);

   if (*str == '%')
     {
       _putchar('%');
     }
   else if (*str == NULL)
     {
       return NULL;
     }
   return 0;
}
