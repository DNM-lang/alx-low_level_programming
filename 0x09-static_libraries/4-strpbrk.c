#include "main.h"
/**
 * _strpbrk - Entry point.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int c = 0;

		while (accept[c])
		{
			if (*s == accept[c])
			{
				return (s);
			}
			c++;
		}
		s++;
	}
	return (0);
}
