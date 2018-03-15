#include <stdio.h>

int main()
{
	int i,f=1,s=1,n;
	double sum=0;
	for(i=1;i<=20;i++)
	{
		n=f+s;
		f=s;
		s=n;
		sum=sum+(double)s/(double)f;
	}
	printf("%lf",sum);
	return 0;
}