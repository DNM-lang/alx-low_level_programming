#include "main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		putchar(*s);
		s++;
	}
}
int main(void)
{
	char message[] = "Hello, world";
	_puts(message);
	return (0);
}
