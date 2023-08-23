#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block
 * Return: pointer to newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int n;

	if (new_size == old)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old)
	{
		for (n = 0; n < new_size; n++)
			ptr1[n] = old_ptr[n];
	}

	if (new_size > old)
	{
		for (n = 0; n < old; n++)
			ptr1[n] = old_ptr[n];
	}

	free(ptr);
	return (ptr1);
}
