#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: Unsigned int for size of array
 * @c: - Char to initialize the array with
 * Return: Char pointer to array, NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer =  (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}

}
