#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: pointer to string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n. length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
