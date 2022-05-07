#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char.
 * Return: NULL if size = 0 or to
 * a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ar[i] = c;

	return (ar);
}
