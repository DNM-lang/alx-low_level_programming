#include "main.h"
/**
 * _memset - fill a block of memory with a particular value
 *
 * @s: pointer to the memory location.
 * @b: value to be set in each memory block.
 * @n: number of bytes to set to the value 'b'.
 * Return: 0 always
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
