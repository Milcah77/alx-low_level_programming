#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * written by Milcah
 * @a: int to check
 * @n: int to check
 * Return: 0 is sucess
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf('\n');
}
