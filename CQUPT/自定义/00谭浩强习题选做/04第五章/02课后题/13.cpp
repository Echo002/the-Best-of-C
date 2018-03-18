#include <stdio.h>
#include <math.h>
int main()
{
	double a,x0,x1;
	scanf("%lf",&a);
	x0=a/2.0;
	x1=(x0+a/x0)/2.0;
	while(abs(x0-x1)>10e-5)
	{
		x0=x1;
		x1=(x0+a/x0)/2.0;
	}
	printf("%-8.5lf\n",x0);
	return 0;
}