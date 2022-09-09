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
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li bytes(s)\n", sizeof(float));

	return (0);
}
