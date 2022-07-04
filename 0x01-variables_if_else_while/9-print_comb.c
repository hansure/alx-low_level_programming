#include<stdio.h>

int main(void)
{
	int n;
for(n=0; n<10; n++)
{
putchar(n +'0');
if(n != 9)
{
putchar(',');
putchar('\t');
}
}
putchar('\n');
	return (0);
}
