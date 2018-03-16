#include <stdio.h>
int main()
{
	int a[25]={1,1},i;
	for(i=2;i<25;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<25;i++)
	{
		printf("%8d",a[i]);
		if((i+1)%5==0)
			printf("\n");
	}
	return 0;
}