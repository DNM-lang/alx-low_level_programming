#include "main.h"
/**
 * _memcpy - function used to copy specified bytes.
 * @dest: pointer to be pasted in from src.
 * @n: number of bytes to be copied.
 * @src: pointer to location where bytes are copied from.
 *
 * Return: the full number of bytes.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *main_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (main_dest);
}
