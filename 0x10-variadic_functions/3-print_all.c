#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * op_c: print character
 * @form: name va_list
 *
 * Return: nothing
 */

void op_c(va_list form)
{

	printf("%c", va_arg(form, int));
}

/**
 * op_i: Print Integer
 * @form: name va_list
 *
 * Return: nothing
 */

void op_i(va_list form)
{

	printf("%i", va_arg(form, int));
}
/**
 * op_f: Print Float numbers
 * @form: name of va_list
 * Return: nothing
 */

void op_f(va_list form)
{

	printf("%f", va_arg(form, double));
}

/**
 * op_s: print string
 * @form: name va_list
 * return: nothing
 */

void op_s(va_list form)
{

	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
	
		printf("(nil)");
		return;
	}

	printf("%s", str);

}

/**
 * print_all: Check the code 
 * @format: number of arguments in character format
 * Return: nothing
 */

void print_all(const char * const format, ...)
{

	va_list all,
		unsigned int i, j;

	char *separator = "";

	f ops[] = {
	
		{"c", op_c},
		{"i", op_i},
	        {"f", op_f},
		{"s", op_s},
	};

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
	
		j = 0;
		while ( < 4)
		{
		
			if (ops[j].op[0] == format[i])
			{
			
				printf("%s", separator);
				separator = ", ";
				ops[j].f(all);
				breake
			}
			j++;
		}

		i++;
	}
	printf("\n");
	va_end(all);
}









