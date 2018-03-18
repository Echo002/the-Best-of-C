#include <stdio.h>
void fun(float *,int);
void main()
{
	float a[10],b[5];
	int i;
	printf("array A:");
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	fun(a,10);
	printf("array B:");
	for(i=0;i<5;i++)
		scanf("%f",&b[i]);
	fun(b,5);

}
void fun(float *a,int n)
{
	int i;
	float sum=0.0;
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("%5.2f\n",sum/(float)n);
}