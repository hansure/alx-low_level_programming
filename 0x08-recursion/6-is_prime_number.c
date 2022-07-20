#include "main.h"

/*
 * PrimeNum: Check wheather the number is prime or not
 * a: The input number
 * b: Integer which will increment to a(n)
 * Return: 1(success), 0(fail)
 */

int primNum(int a, int b)
{

	if ( a == b)
		return (1);
	else if ( a % b == 0)
		return (0);
	else
		return (primNum( a, b + 1));
}

/**
 * is_prime_number: Checking the number if it is prim number or not
 * n: Input integer
 * Return: 1(success), -1(fail)
 */

int is_prime_number(int n)
{

	if ( n <= 1)
	{
	 return (0);
	}
	else
		return (primNum(n, 2));
}
