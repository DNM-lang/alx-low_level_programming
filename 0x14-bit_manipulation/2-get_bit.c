#include "main.h"
/**
 * get_bit -a function that returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get'
 * @n: value
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
