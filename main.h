#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 *
 *
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
int checker(const char *format, conver_t f_list[], va_list arg_list);

#endif /* MAIN_H */
