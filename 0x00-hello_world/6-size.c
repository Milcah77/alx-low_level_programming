#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by Milcah
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %1 byte(s)\n", sizeof(char));
	printf("size of an int: %1 byte(s)\n", sizeof(int));
	printf("size of a long int: %1 byte(s)\n", sizeof(long int));
	printf("size of long long int: %1 byte(s)\n", sizeof(long long int));
	printf("size of a float: %1 byte(s)\n", sizeof(float));
	return (0);
}
