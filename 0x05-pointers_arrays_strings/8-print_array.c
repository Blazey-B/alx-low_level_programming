#include <stdio.h>
#include "main.h"

/**
 * puts_half - half of a string.
 * @n: is the number of elements
 * @a: array
 * Return: nothing.
 */
void print_array(int *a, int n);
({
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10)
}
