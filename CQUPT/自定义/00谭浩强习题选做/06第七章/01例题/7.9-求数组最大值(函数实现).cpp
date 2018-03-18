#include <stdio.h>
void fun(int*);
void main()
{
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	fun(a);
}
void fun(int *a)
{
	int *p=a,count,max,r;
	max=*p;r=0;
	for(count=0;count<8;count++)
	{
		if(max<*(p+1))
		{
			max=*(p+1);
			r=count+1;
		}
		p++;
	}
	printf("%d  %d\n",max,r);
}