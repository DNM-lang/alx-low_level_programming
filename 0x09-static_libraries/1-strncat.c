#include "main.h"
/**
 * _strncat - appends n numbers of a string to another string.
 * @dest:pointer to the destination string.
 * @src: pointer to the source string.
 * @n: maximum number of character to be concatenated.
 * Return: main_dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (main_dest);
}
