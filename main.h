#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * definer - defines a structure for symbols and functions
 * @sym: The operator
 * @f The function associated
 */
struct definer
{
	char *sym;
	int (*f)(va_list);
};
typedef struct definer definer;

/*Main functions*/
int _printf(const char *format, ...);
int _putchar(char c);
int checker(const char *format, definer f_list[], va_list arg_list);
char *_NULL(va_list args);
int print_char(va_list args);
int print_percent(char *str);
int print_string(va_list args);
int print_integer(va_list args);

#endif /* MAIN_H */
