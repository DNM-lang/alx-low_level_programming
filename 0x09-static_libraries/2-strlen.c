#include "main.h"
/**
 * _strlen - function used to determine the length of a string.
 *
 * @s: String.
 *
 * Return:length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '0')
	{
		length++;
		s++;
	}

	return (length);
}
