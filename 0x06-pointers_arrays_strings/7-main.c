#include "main.h"
#include <stdio.h>

/**
 * main: Cheching the code 
 *
 * Return: Always 0
 */
int main(void)
{

	char s[] = "Expect the best. Prepare for the worst.\n";
	char *p;
	p = leet(s);
	printf("%s", p);
        printf("%s", s);
        return (0);	
}
