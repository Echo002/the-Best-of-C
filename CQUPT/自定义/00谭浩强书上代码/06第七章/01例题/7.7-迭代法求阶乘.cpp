#include <stdio.h>
int fun(int);
void main()
{
	printf("%d\n",fun(6));
}
int fun(int n)
{
	if(n>=2)
		return fun(n-1)*n;
	return n;
}