#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of
 * characters and initializes it with a specific character.
 * @size: The size of the array to be created.
 * @c: The character used to initialize each element of the array.
 *
 * Return: On success, a pointer to the allocated array.
 *         On failure or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
array[i] = c;
return (array);
}
