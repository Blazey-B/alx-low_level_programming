#include "main.h"

/**
 * Main: Entry point
 * Function that swaps the value of two integers
 * Return: Always 0
 */

void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
