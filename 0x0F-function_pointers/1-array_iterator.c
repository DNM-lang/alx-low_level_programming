#include "function_pointers.h"
#include <stdio.h>


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unasign int i;

	if(array == NULL || action == NULL)
		return;
	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
