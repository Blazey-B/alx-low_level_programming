#include <stdio.h>
/**
 * main - printing numbers from 0-9
 * Description: using the main function
 * this program prints "0123456789"
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	        putchar((num % 10) + '0');
	
	putchar('\n');
	return (0);
}
