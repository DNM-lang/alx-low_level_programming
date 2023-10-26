#include "main.h"
/**
 * main - Entry point.
 * @s: Pointer to a string.
 * _puts_recursion - Recussive function that prints to screen..
 *
 * Return : returns null.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
