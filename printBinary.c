#include "main.h"

/**
 * print_binary - prints an unsigned int into binary.
 * @arg: argument to pass to the function
 *
 * Return: number of digits printed.
 */
int print_binary(va_list arg)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	n = va_arg(arg, unsigned int);
	m = 2147483647; /* (2 to power of 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
