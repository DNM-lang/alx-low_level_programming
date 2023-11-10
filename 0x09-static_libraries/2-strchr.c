#include "main.h"
/**
 * _strchr - function used to locat the first occurance of a char in a string.
 * @s:A pointer to the string in which to search for character 'c';
 * @c: the character you want to find in the string.
 * Return: s on first occurance of c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
