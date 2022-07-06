#include "main.h"
/**
 * The function to check alphabetic
 * Return: 1 if ch is a letter, otherwise print 0
 */


int _isalpha(int ch)
{
if(((ch >= 'a')&& (ch <='Z')) || ((ch >= 'A') &&(ch <= 'Z')))
	return (1);
else
	return (0);
}
