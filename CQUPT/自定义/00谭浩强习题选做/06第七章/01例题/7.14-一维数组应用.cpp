#include <stdio.h>
void fun(double*);
int main()
{
	double a[10];
	int i;
	for(i=0;i<10;i++)
	scanf("%lf",&a[i]);
	fun(a);	
} 

void fun(double *a)
{
	float max=0,min=0,sum=0,ave;
	int i;
	min=a[0];max=a[0];
	for(i=0;i<10;i++)
	{
		sum+=a[i];
		if(max<a[i])
		max=a[i];
		if(min>a[i])
		min=a[i];
	}
	ave=sum/10.0;
	printf("max=%lf,min=%lf,ave=%lf\n",max,min,ave);
}