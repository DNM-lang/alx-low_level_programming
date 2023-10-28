#include "main.h"
/**
 * _islower - function that checks if the char is in lowercase.
 *
 * @c: the caharacter to be checked.
 *
 * Return: 1 if lowercases or 0 if upper case.
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
