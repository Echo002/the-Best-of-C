#include <stdio.h>

int main()
{
	double sum,sum1=0,sum2=0,sum3=0;
	int i;
	for(i=1;i<=100;i++)
		sum1+=i;
	for(i=1;i<=50;i++)
		sum2+=i*i;
	for(i=1;i<=10;i++)
		sum3+=1.0/i;
	sum=sum1+sum2+sum3;
	printf("%lf\n",sum);
	return 0;
}