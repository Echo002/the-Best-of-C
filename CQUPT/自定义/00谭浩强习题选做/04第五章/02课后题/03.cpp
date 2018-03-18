#include <stdio.h>

void main()
{
	int max,min,mod,j,k;
	scanf("%d,%d",&max,&min);
	j=max;
	k=min;
	mod=j%k;
	while(mod!=0)
	{
		j=k;
		k=mod;
		mod=j%k;
	}
	printf("%d %d\n",k,max*min/k);
}