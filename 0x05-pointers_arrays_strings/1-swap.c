#include "main.h"

/**
 * Main: Entry point of the program
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
