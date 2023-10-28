#include "main.h"
/**
 * _strspn - function used to determine length of a string of initial segment.
 * @accept: pointer to the string containing char yo wanna match.
 * Return: the count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int r;

	while (*s)
	{
		int matched = 0;

		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				matched = 1;
				break;
			}
		}
		if (matched)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
