#include <stdio.h>
void fun(float *);
void main()
{
	float a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	fun(a);
}
void fun(float *a)
{
	int i;
	float sum=0.0;
	for(i=0;i<10;i++)
		sum+=a[i];
	printf("%5.2f",sum/10);
}