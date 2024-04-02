#include "main.h"
/**
 *
 */
int _NULL(va_list args)
{
 char *str = va_arg(args, char *);

 if (str == NULL)
   return NULL;

 return 0;
}
