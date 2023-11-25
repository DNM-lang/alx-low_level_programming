#include "main.h"
/**
 * _islower - checks if the letter is lower.
 * @c: the character to be checked
 *
 * Return: 1 when is lower 0 when not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
