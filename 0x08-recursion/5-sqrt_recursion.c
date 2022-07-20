#include "main.h"
int sqroot(int, int);

/**
 * _sqrt_recursion: Calculate the squar root of the number
 * n: Integer number
 * return: 1(success), -1(fail)
 */

int _sqrt_recursion(int n)
{

	return (sqroot(n, 1));
}

/**
 * sqroot: Evaluate the possible number that give the number
 * a: number n
 * b: 1 to n(iterate)
 * Return: 1(on success), -1 (fail)
 */

int sqroot(int a, int b)
{

	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (sqroot(a, b + 1));

}
