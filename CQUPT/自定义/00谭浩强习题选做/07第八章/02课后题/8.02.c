#include "stdio.h"
int main()
{
	int a,b;
	int *p,*p1,*p2;
	scanf("%d,%d",&a,&b);
	p1 = &a;
	p2 = &b;
	if(a<b)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a = %d,b = %d\n",a,b);
	printf("*p1=%d,*p2=%d\n",*p1,*p2);
	return 0;
}