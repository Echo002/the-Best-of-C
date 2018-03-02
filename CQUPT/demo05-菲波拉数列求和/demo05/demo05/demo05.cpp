#include <stdio.h>
int main()
{
	int n=0,m=1,k=1,sum=0,i,count;
	scanf("%d",&count);
	for(i=1;i<=count;i++)
	{
		sum=sum+k;
		k=m+n;
		n=m;
		m=k;
	}
	printf("%d\n",sum);
}