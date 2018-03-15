#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,delta,x1,x2;
	printf("a,b,c:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta<0)
		printf("none!\n");
	else if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%lf,x2=%lf\n",x1,x2);
	}
	else
	{
		x1=-b/(2*a);
		printf("x1=x2=%lf",x1);
	}
	return 0;
}