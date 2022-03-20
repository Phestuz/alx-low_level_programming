#include "main.h"

/**
 * print_diagonal - prints diagonal n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int n, j;

	for (1 = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (1 < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}