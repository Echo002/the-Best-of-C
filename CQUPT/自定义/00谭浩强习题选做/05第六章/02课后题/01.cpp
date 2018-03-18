#include <stdio.h>
#include <math.h>
void main()
{
	int num[101],i,j;
	for(i=1;i<=100;i++)
		num[i]=i;
	num[1]=0;
	for(i=0;i<sqrt(100);i++)
		for(j=i+1;j<=100;j++)
		{
			if(num[i]!=0&&num[j]!=0)
				if(num[j]%num[i]==0)
					num[j]=0;
		}
	for(i=1;i<=100;i++)
	{
		if(num[i]==0)
			continue;
		printf("%5d",num[i]);
	}
	printf("\n");
		
}