#include <stdio.h>
/**
 *Size documentation
 * /
int main(void)
{
int a;
float b;
char c;
long int d;
long long int e;

printf("Size of integer: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(e));
return(0);
}
