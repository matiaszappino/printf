# Printf
## Synopsis
This is a simple implementation of printf function that formats and prints data
## Description
The _printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.
The available convertion specifiers are:
+ %b: Prints the binary representation of an unsigned decimal.
+ %c: Prints a single character.
+ %d: Prints integers.
+ %i: Prints integers.
+ %p: Print the address which the pointer points to.
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string
+ %s: Prints a string of characters.
+ %S: Prints non printable characters as \x and their ASCII value in hexadecimal.
+ %u: Prints unsigned integers
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X: Prints the hexadecial representation of an unsigned decimal in uppercase letters

## Usage
+ All the files are to be compiled on Ubuntu 14.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
+ Include the "holberton.h" header file on the functions using the _printf()
## Example

```
#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	char *str;
	str = "school";
	a = _printf("%r\n", "Holberton"); /*expected: notrebloh*/
	printf("--->%d\n", a); /*expected: 10*/
	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	return (0);
}
```
By Gianluca Dorelo and Matias Zappino
