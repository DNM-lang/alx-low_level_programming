#include "main.h"
/**
 * _strncpy - function used to coppy at most n characters from source.
 * @dest:pointer to the destinattion string where data will be copied.
 * @src: pointer to the source string.
 * @n: the max number of character to copy.
 * Return: the combined langth.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *main_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (main_dest);
}

