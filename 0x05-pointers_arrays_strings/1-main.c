#include "main.h"
#include <stdio.h>

/**
 * main: to check the code
 *
 * Return: always 0
 */
int main(void)
{

	int a, b;

	a = 98;
	b = 42;
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
