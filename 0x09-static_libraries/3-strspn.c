#include "main.h"
/**
 * _strspn - function used to determine length of a string of initial segment.
 * @accept: pointer to the string containing char yo wanna match.
 * Return: the count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				q++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (q);
			}
			s++;
		}
		return (q);
	}
}

