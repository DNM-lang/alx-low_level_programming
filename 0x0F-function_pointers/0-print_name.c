#include "function_pointers.h"
#include <stdio.>
/**
 *print_name - peints the name(fun name).
 *@name: character string rep name.
 *@f: pointer to a function.
 *Return: always 0(success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
