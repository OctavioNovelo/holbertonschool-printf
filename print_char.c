#include "main.h"
/**
 *
 */
char print_char(va_list args)
{
   int character = va_arg(args, int);
   _putchar(character);
   return 1;
}
