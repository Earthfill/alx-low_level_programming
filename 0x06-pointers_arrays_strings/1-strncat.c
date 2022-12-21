#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, *src, n);
	return (dest);
}
