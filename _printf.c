#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += putchar(va_arg(args, int));
break;
case 's':
{
char *str = va_arg(args, char *);
while (*str)
{
count += putchar(*str);
str++;
}
break;
}
case '%':
count += putchar('%');
break;
default:
count += putchar('%');
count += putchar(*format);
break;
}
}
else
{
count += putchar(*format);
}
format++;
}
va_end(args);
return count;
}
