#include <stdio.h>
int main()
{
	int min,max,n,a,b;
	printf("����������������С�����ö��Ÿ���:");
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
	printf("��С��Լ��Ϊ%d����󹫱�����%d\n",min,a*b/min);
	return 0;
}