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
	int length, j;
	/* j is a counter for n bytes of src to be concatenated */
	/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = o; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
