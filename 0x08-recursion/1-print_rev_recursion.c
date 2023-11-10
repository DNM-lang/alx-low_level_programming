#include "main.h"
/**
 * _print_rev_recursion - Functio that prints the reverse of the string.
 *
 * @s : string to be printed.
 *
 * return - Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
