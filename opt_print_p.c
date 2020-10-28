#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_p - print memory address
 *@arglist: argument list
 *Return: return number of bytes
 */
int print_p(va_list arglist)
{
	unsigned long num = va_arg(arglist, void *), num1 = 0;
	long i, j, bytes = 0, hexa = 0;
	char *address;
	char *str = "(nil)";

	if (num == 0)
	{
		for (i = 0; str[i] != 0; i++)
		{
			_putchar(str[i]);
			bytes++;
		}
		return (bytes);
	}
	num1 = num;

	for (i = 1; num1 / 16 != 0; i++)
		num1 /= 16;
	address = malloc(sizeof(i));
	if (address == NULL)
		return (-1);
	address[0] = '0';
	address[1] = 'x';
	for (j = 0; j < i; j++)
	{
		hexa = num % 16;
		if (hexa > 9)
			address[(i + 1) - j] = hexa + 87;
		else
			address[(i + 1) - j] = hexa + 48;
		num /= 16;
	}
	address[j + 2] = '\0';
	for (i = 0; address[i] != '\0'; i++)
	{
		_putchar(address[i]);
		bytes++;
	}
	free(address);
	return (bytes);
}
