#include "main.h"
/**
 * The function to check the number sign
 * Return + if greater than 0, - if less than 0 else printing 0
 */

int print_sign(int num)
{
if(num < 0)
{
_putchar('-');
return (-1);
}
else if(num > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
