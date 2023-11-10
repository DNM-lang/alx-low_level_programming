#include "main.h"
/**
 * _strcat - function used to append a string to another string.
 * @dest: pointer to memory location to be appended.
 * @src:pointer to memory location containing the value to be appended to dest
 * Return: pointer to appended value.
 */
char *_strcat(char *dest, char *src)
{
	char *main_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (main_dest);
}
