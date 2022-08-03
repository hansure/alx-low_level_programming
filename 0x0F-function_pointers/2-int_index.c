#include "function_pointers.h"
/**
 * int_index:a function that searchs an intenger
 * @array:the number of the element
 * @size:the size of the array
 * @cmp:0(successd), -1(fail)
 *
 * Return: the index of the first element if success or -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size > 0)
	{
	
		if (array != NULL && cmp != NULL)
		{
		
			while (i < size)
			{
			
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}
	return (-1);
}
