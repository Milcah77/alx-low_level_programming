#include "main.h"

/**
 * _strpbrk - searches string for a set of bytes
 * @s: first occurance of string
 * @accept: matches bytes or @Nuull if no that byte
 * Reurn: a pointer to the byte
 */
char *_strpbrk(char *s char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
