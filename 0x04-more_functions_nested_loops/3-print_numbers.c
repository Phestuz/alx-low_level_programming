#include "main.h"

/**
 * print_numbers - prints numbers between o to 9
 * Return: no return'
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
