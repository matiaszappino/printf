#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_u - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_u(va_list arglist)
{
	int bytes = 0;
	unsigned int n = va_arg(arglist, int);
	unsigned int num;
	int *pbytes = &bytes;

	num = n;

	if (num == 0)
	{
		_putchar('0');
		bytes++;
	}
	if (num > 0)
	{
		bytes = print_u_aux(num, n, pbytes);
	}
return (bytes);
}
/**
 *print_u_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
*/
int print_u_aux(unsigned int num, unsigned int n, int *pbytes)
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
/**
 *print_o - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_o(va_list arglist)
{
	int bytes = 0;
	unsigned int n = va_arg(arglist, int);
	unsigned int num;
	int *pbytes = &bytes;

	num = n;

	if (num == 0)
	{
		_putchar('0');
		bytes++;
	}
	if (num > 0)
	{
		bytes = print_o_aux(num, n, pbytes);
	}
return (bytes);
}
/**
 *print_o_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
*/
int print_o_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

		while (num > 0)
		{
			num = num / 8;
			contador++;
		}
		length = contador;
		array = (int *)malloc(sizeof(int) * length);
		if (array == NULL)
			return (-1);
		num = n;
		while (contador > 0)
		{
			array[j] = num % 8;
			j++;
			num = num / 8;
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
