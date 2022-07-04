#include<stdio.h>

int main(void)
{
int n;
for (n='a'; n<='z'; n++)
{
if(n=='e' || n=='q')
{
continue;
}
else {
putchar(n);
}
}
putchar('\n');
return (0);
}
