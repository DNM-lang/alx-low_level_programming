#include "main.h"
/**
 * _isalpha - checks if the char is an alph
 *
 * @c: character
 * Return: 1 when true 0 otherwise
 */
int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
