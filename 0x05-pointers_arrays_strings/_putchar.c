#include <unistd.h>

/**
 * _putchar - writes character c to standout
 * @c: character to be printed
 * Return: One sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
