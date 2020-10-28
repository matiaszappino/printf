#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_b - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_b(va_list arglist)
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
		bytes = print_b_aux(num, n, pbytes);
	}
return (bytes);
}
/**
 *print_b_aux - prints char
 *@num: num variable
 *@n: n variable
 *@pbytes: pbytes pointer
 *Return: number of bytes
*/
int print_b_aux(unsigned int num, unsigned int n, int *pbytes)
{
	int contador = 0, j = 0, length;
	int *array;

		while (num > 0)
		{
			num = num / 2;
			contador++;
		}
		length = contador;
		array = (int *)malloc(sizeof(int) * length);
		if (array == NULL)
			return (-1);
		num = n;
		while (contador > 0)
		{
			array[j] = num % 2;
			j++;
			num = num / 2;
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
 *print_rot13 - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_rot13(va_list arglist)
{
	char *chain1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *chain2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j, bytes = 0;
	char *s = va_arg(arglist, char *);

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chain1[j] != '\0'; j++)
		{
			if (s[i] == chain1[j])
			{
				_putchar(chain2[j]);
				bytes++;
				break;
			}
		}
		if (!chain1[j])
		{
			_putchar(s[i]);
			bytes++;
		}
	}
	return (bytes);
}
/**
 *print_rev - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_rev(va_list arglist)
{
	int i = 0;
	int bytes = 0;
	char *s = va_arg(arglist, char *);

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
		bytes++;
	}
return (bytes);
}
/**
 *print_S - prints char
 *@arglist: list of arguments
 *Return: number of bytes
*/
int print_S(va_list arglist)
{
	int i;
	char *s = va_arg(arglist, char *);
	int bytes = 0;
	unsigned int num;

	i = 0;

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		if (((s[i] > 0) && (s[i] < 32)) || (s[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			bytes += 2;
			num = s[i];
			if (num > 9)
			{
				_putchar((num / 16) + 48);
				_putchar((num % 16) + 55);
				bytes += 2;
			}
			else
			{
				_putchar(48);
				_putchar((num % 16) + 48);
				bytes += 2;
			}
		}
		else
		{
			_putchar(s[i]);
			bytes++;
		}
	i++;
	}
return (bytes);
}
