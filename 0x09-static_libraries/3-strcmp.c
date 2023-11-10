#include "main.h"
/**
 * _strcmp - used to compare 2 strings && determine if they are equal,
 * or which comes first lexicographically.
 * @s1: pointer to wherethe first string is.
 * @s2: pointer to the second string.
 * Return: 0, -1, 1, if equals, s1 > s2 and s2 > s1 respectively.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
