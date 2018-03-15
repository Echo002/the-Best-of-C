#include <stdio.h>
void main()
{
	int n,i,sum=0,num=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=2+num*10;
		sum+=num;
	}
	printf("%d",sum);
}