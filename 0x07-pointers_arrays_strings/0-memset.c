#include "main.h"

/**
 * _memset - firts bytes of @n of memory area @s with constant byte @b
 * @n: bytes of memory area pointed to by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
