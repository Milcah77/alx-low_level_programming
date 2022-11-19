#include "function_pointers.h"

/**
 * array_iterator - a function given a parameter
 *
 * @array: array to execute function
 * @size: is the size of the array*
 *@action: is the pointer to the function ton use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[array[i]);
			i++;
		}
	}
}
