#include <stdio.h>
#define N 10
void fun(int *,int);
void main()
{
	int a[N]={1,3,5,7,9,11,13,15,17,19},i,num;
	scanf("%d",&num);
	fun(a,num);
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	printf("\n");
}
void fun(int *a,int num)
{
	int c1,c2;
	for(c1=0;c1<N;c1++)
	{
		if(a[c1]>num)
		{
			for(c2=N-2;c2>=c1;c2--)
				a[c2+1]=a[c2];
			a[c1]=num;
			break;
		}
	}
}#include <stdio.h>
#define N 10
void fun(int *,int);
void main()
{
	int a[N]={1,3,5,7,9,11,13,15,17,19},i,num;
	scanf("%d",&num);
	fun(a,num);
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	printf("\n");
}
void fun(int *a,int num)
{
	int c1,c2;
	for(c1=0;c1<N;c1++)
	{
		if(a[c1]>num)
		{
			for(c2=N-2;c2>=c1;c2--)
				a[c2+1]=a[c2];
			a[c1]=num;
			break;
		}
	}
}