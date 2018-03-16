#include <stdio.h>
int main()
{
	int a[3][4],i,j,max,x=0,y=0;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				x=i;
				y=j;
			}
		}
	printf("max=%d,x=%d,y=%d",max,x,y);
}