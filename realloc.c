#include "main.h"

/**
 * *_realloc - creates an array of integers
 * @old_size: minimum range of values stored
 * @new_size: maximum range of values stored and number of elements
 * @ptr: pointer
 * Return: pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *ptr_init;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_1 = malloc(new_size);

	if (ptr_1 == NULL)
		return (NULL);

	ptr_init = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr_1[i] = ptr_init[i];
		}
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			ptr_1[i] = ptr_init[i];
		}
	}
	free(ptr);
	return (ptr_1);
}
