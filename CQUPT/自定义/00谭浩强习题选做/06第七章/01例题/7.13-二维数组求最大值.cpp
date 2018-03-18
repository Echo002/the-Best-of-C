#include <stdio.h>
int main()
{
	int i,j,a[3][4],max,row,column;
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
	max=a[0][0];
	row=0;
	column=0;
	
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{
		if(max<a[i][j])
		{
			max=a[i][j];
			row=i+1;
			column=j+1;
		}
	}
	printf("max=%d,row=%d,column=%d",max,row,column);
} 