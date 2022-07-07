#include "main.h"

/**
 * larges_number - return the largest of three numbers
 * @a: first integer
 * @b: Second integer
 * @c: Third inteher
 * REturn: larhest number
 */


int largest_number(int a, int b, int c)
{
int largest;

if(a > b && b > c)
{
largest = a;
}
else if(b > a && a > c)
{
largest = b;
}
else 
{
largest = c;
}

return (largest);

}
