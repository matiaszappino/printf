#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_string - print strings
 *@arglist: argument list
 *Return: number of bytes
 */
int print_string(va_list arglist)
{
	int i;
	char *string = va_arg(arglist, char *);

	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
 *print_char - prints char
 *@arglist: argument list
 *Return: number of bytes
*/
int print_char(va_list arglist)
{
	_putchar(va_arg(arglist, int));

	return (1);
}
/**
 *print_int - prints char
 *@arglist: argument list
 *Return: number of bytes
*/
int print_int(va_list arglist)
{
	int bytes = 0;
	int n = va_arg(arglist, int);
	unsigned int num;
	int *pbytes = &bytes;

	num = n;

	if (num == 0)
	{
		_putchar('0');
		bytes++;
	}
	if (n < 0)
	{
		_putchar('-');
		bytes++;
		num = -n;
	}
	if (num > 0)
	{
		bytes = print_int_aux(num, n, pbytes);
	}
return (bytes);
}
/**
 *print_int_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
*/
int print_int_aux(unsigned int num, int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

		while (num > 0)
		{
			num = num / 10;
			contador++;
		}
		length = contador;
		array = (int *)malloc(sizeof(int) * length);
		if (array == NULL)
			return (-1);
		num = n;
		if (n < 0)
			num = -n;
		while (contador > 0)
		{
			array[j] = num % 10;
			j++;
			num = num / 10;
			contador--;
		}
		while (length > 0)
		{
			_putchar(array[length - 1] + '0');
			length--;
			(*pbytes)++;
		}
free(array);
return ((*pbytes));
}
