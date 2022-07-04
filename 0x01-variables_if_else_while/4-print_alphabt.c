#include<stdio.h>
/*
 * This function to display alphabetical letters
 * */
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
if (n == 'e' || n == 'q')
{
continue;
}
else
{
putchar(n);
}
}
putchar('\n');
return (0);
}
