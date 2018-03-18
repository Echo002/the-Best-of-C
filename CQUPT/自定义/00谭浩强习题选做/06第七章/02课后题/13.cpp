#include <stdio.h>
double fun(double,int);
int main()
{
	int n;double x;
	scanf("%d,%lf",&n,&x);
	printf("%5.2lf\n",fun(x,n));
	return 0;
} 
double fun(double x,int n)
{
	if(n==1)
	{
		return x;
	}
	if(n==0)
		return 1;
		else return((2*n-1)*x-fun(x,n-1)-(n-1)*fun(x,n-2))/n;
}
