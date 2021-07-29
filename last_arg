#include "holberton.h"



/**
 * switchs - takes string and uses correct conversion
 * @str: input string
 * @arg: input argument from list
 * goes through switch cases;
 * Return: count
 */

int switchs(const char *str, va_list arg)
{
	int count, c;
	char *s = malloc(sizeof(str));

  count = 0;
  str++;
  switch (*str)
    {
    case 's':
      return (print_s(str, arg));
    case 'c':
      c = va_arg(arg, int);
      _putchar(c);
      count++;
      return (count);
    case 'd':
      s = _itoa(va_arg(arg, int), s, 10);
      _puts(s);
      count += _strlen(s);
      return (count);
    case 'i':
      s = _itoa(va_arg(arg, int), s, 10);
      _puts(s);
      count += _strlen(s);
      return (count);
    case '%':
      str--;
      _putchar('%');
      count++;
      return (count);
    case 'b':
      return (print_b(arg));
    case 'r':
      return (_rev(arg));
    default:
      _putchar('%');
      _putchar(*str);
      count = 2;
      return (count);
    }
}
/**
 * print_s - prints string after conversion specifier
 * @str: input string
 * @arg: input argument from list
 * prints string, as long as it's not null
 * Return: length of string
 */
int print_s(const char *str, va_list arg)
{
	char *s = malloc(sizeof(str));
	int count;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		free(s);
		return (0);
	}
	else
	{
	_puts(s);
	count = _strlen(s);
	}
	return (count);
}

/**
 * print_b - print a binary number
 * @arg: argument passed contating the number to convert
 *
 * Return: number of characters printed
 */

int print_b(va_list arg)
{
	unsigned int c, count, Num, binary, arr[32];

	c = 0, count = 0;
	Num = va_arg(arg, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
		c = count - 1;
		while (c > 0)
		{
			_putchar('0' + arr[c]);
			c--;
		}
		_putchar('0' + arr[c]);
	}
	return (count);
}

int _rev(va_list arg)
{
int count = 0;
int loop;  
char *s = va_arg(arg, char*);

for (loop = 0; s[loop]; loop++)
;

while (loop >= 0)
{
if (s == NULL)
{
_puts("(null)");
count += 6;
}
else
{
_putchar(s[loop]);
loop--;
count++;
}
}
return (count);
}
