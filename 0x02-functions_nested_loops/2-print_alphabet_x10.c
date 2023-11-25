#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: Always 0(succes)
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

