#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		a[i]=i;
	for(i=9;i>=0;i--)
		printf("%4d",a[i]);
	printf("\n");
	return 0;
}
