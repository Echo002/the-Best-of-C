#include <stdio.h>
int main()
{
	int a[10],i,j,min,temp;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10-i;j++)
		if(a[j]<a[min])
		min=j;
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	for(i=0;i<10;i++)
	printf("%d  ",a[i]);
	printf("\n");
} 