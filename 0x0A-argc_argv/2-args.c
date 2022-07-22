#include <stdio.h>

/**
 * Main: Entry function
 * @argc: The number of argument
 * @argv: The array of string(Input argument)
 * Return: 0
 */

int main(int argc,char *argv[])
{

	int i;
	if (argc > 1)
	{
	
		for (i = 0; i < argc; i++)
		{
		
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
