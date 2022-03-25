/*
 * File: 1-strncat.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

/**
 * _strncat - function that cooncatenates two strings. it will use at most n bytes from src, src does not need to be null terminated.
 * @dest: pointer to destunation string
 * @src: pointer to source string.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
