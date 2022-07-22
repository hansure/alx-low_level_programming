#include <stdio.h>
#include <stdlib.h>

/**
 * Main: multiply two argument numbers
 * @argc: The number of argument
 * @argv: Array of pointers to argument strings
 * Return:multiplication value or 1(if error)
 */

int main(int argc, char *argv[])
{

	int a, b, result;

	if (argc <= 2)
	{
		printf("Error, needed to more than two argument\n");
		return (1);
	
	}

	/**
	 * use atoi to convert a string to an int
	 */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
