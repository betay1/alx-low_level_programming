#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c);
{
	size_t i;
	char *ptr;

	if (size == 0)
{
	return (NULL);
}
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	ptr[i] = c;
}
return (ptr);


