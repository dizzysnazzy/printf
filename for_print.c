#include "holberton.h"

/**
 * format_unsignd - prints an unsigned int in hexadecimal
 * @n: int to be printed
 * @flag: tells function whether to print in uppercase or lowercase
 *
 * Return: number of characters printed
 */

int format_unsignd(unsigned int n, char flag)
{
	int cc = 0, rem = 0;

	if (n / 16)
		cc += format_unsignd(n / 16, flag);

	rem = n % 16;

	if (rem < 10)
	{
		_putchar(rem + '0');
		cc++;
	}
	else
	{
		if (flag == 'l')
			_putchar(rem - 10 + 'a');
		else if (flag == 'u')
			_putchar(rem - 10 + 'A');
		cc++;
	}
	return (cc);
}

/**
 * check - prints invalid specifier as a literal
 * @s: format specifier to be printed
 *
 * Return: number of characters printed
 */

int check(char s)
{
	_putchar('%');
	_putchar(s);
	return (2);
}

int forprint_helper(unsigned long int n);
/**
 * forprint - gets address of void pointer and calls function that prints
 * address in hexadecimal
 * @p: void pointer whose address will be printed
 *
 * Return: number of characters printed
 */

int forprint(void *p)
{
	int cc = 0;
	unsigned long int n;

	n = (unsigned long int)p;

	if (n == 0)
		return (_printf("(nil)"));

	_putchar('0');
	cc++;
	_putchar('x');
	cc++;

	cc += forprint_helper(n);

	return (cc);

}

/**
 * forprint_helper - prints address of void pointer in hexadecimal
 * @n: address of void pointer
 *
 * Return: number of characters printed
 */

int forprint_helper(unsigned long int n)
{
	int cc = 0, rem = 0;

	if (n / 16)
		cc += forprint_helper(n / 16);

	rem = n % 16;

	if (rem < 10)
	{
		_putchar(rem + '0');
		cc++;
	}
	else
	{
		_putchar(rem - 10 + 'a');
		cc++;
	}
	return (cc);
}
