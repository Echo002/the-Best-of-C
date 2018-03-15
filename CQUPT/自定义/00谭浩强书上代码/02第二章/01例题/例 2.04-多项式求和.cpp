#include <stdio.h>
#include <math.h>

int main()
{
	double sum=0;
	int i;
	for(i=1;i<=100;i++)
		sum=sum+pow(-1.0,i-1)*1/(double)i;
	printf("%lf\n",sum);
	return 0;
}