#include <stdio.h>
int main()
{
	int min,max,n,a,b;
	printf("请输入两个数，从小到大，用逗号隔开:");
	scanf("%d,%d",&min,&max);
	a = max;
	b = min; 
	n = max%min;
	while(n != 0)
	{
		max=min;
		min=n;
		n=max%min;
	}
	printf("最小公约数为%d，最大公倍数是%d\n",min,a*b/min);
	return 0;
}