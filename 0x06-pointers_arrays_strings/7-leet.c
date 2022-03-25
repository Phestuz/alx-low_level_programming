#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	strringCount = 0;
	while (str[stringCount] != '\0')
		/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == str[stringCount])
			{
				str[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (str);
}
