#include "main.h"
#include <stdio.h>

int main(void)
{

	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
