#include "main.h"

/**
 * main - Entry point
 * print_alphabet - abcd...
 * Description: print lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
