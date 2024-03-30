#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
