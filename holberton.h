#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>

/**
 *struct opt - structure of options
 *@reference: character option
 *@function: pointer to function
 */

typedef struct opt
{
	char *reference;
	int (*function)();
} opt;

int _printf(const char * const format, ...);
int _print_aux(const char *, va_list, opt *);
int _strlen(char *s);
int _putchar(char c);
int print_string(va_list);
int print_char(va_list);
int print_int(va_list);
int print_int_aux(unsigned int num, int n, int *pbytes);
int print_b(va_list);
int print_b_aux(unsigned int num, unsigned int n, int *pbytes);
int print_u(va_list);
int print_u_aux(unsigned int num, unsigned int n, int *pbytes);
int print_o(va_list);
int print_o_aux(unsigned int num, unsigned int n, int *pbytes);
int print_x(va_list);
int print_x_aux(unsigned int num, unsigned int n, int *pbytes);
int print_X(va_list);
int print_X_aux(unsigned int num, unsigned int n, int *pbytes);
int print_rot13(va_list arglist);
int print_rev(va_list arglist);
int print_S(va_list arglist);
int print_p(va_list arglist);
#endif
