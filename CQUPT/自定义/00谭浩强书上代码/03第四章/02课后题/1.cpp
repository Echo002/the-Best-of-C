#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double p,r;
	printf("n,r:");
	scanf("%d,%lf",&n,&r);
	p=pow((1+r),n);
	printf("result=%lf\n",p);
	return 0;
}