#include "main.h"
/**
 * _puts_recursion - Recursively print a string to the screen.
 * @s: Pointer to a string.
 *
 * Return : returns null.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
