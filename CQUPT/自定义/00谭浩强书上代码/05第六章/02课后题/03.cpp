#include <stdio.h>
#define N 3
void main()
{
	int a[N][N]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;
	
	for(i=0;i<N;i++)
		sum=sum+a[i][i]+a[i][N-i-1];
	sum-=a[N/2][N/2];
	printf("%d\n",sum);
}