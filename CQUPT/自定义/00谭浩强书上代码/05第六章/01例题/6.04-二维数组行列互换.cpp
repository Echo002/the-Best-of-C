#include <stdio.h>
void main()
{
	int a[2][3]={1,2,3,4,5,6};
	int b[3][2]={0};
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			b[i][j]=a[j][i];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d",a[i][j]);
			printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%d",b[i][j]);
			printf("\n");
	}
}