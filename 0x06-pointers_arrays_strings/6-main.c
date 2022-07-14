#include "main.h"
#include <stdio.h>

/**
 * main: Check the code
 *
 * REturn: always 0
 */

int main(void)
{

	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;
	ptr = cap_string(str);
	printf("%s", ptr);
	return (0);
}
