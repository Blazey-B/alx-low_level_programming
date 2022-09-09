#include <stdio.h>

/**
 * main - char charType;
 * int intType;
 * long int longintType;
 * long long int longlongintType;
 * float floatType;
 *
 * Description: 'sizeof evaluates the size of a variable'
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
	printf("Size of char is=%li bytes\n", sizeof(char));
	printf("Size of int is=%li bytes\n", sizeof(int));
	printf("Size of long int is=%li byte\n", sizeof(long int));
	printf("size of long long int is=%li byte\n", sizeof(long long int));
	printf("Size of float is=%li bytes\n", sizeof(float));

	return (0);
}
