#include <stdio.h>

int main()
{
	double l=100,sum=0;
	int i;
	for(i=1;i<10;i++)
	{
		l=l/2.0;
		sum=sum+l*2;
	}
	sum=sum+100;
	printf("һ������%lfm,��ʮ�η����߶�Ϊ%lfm\n",sum,l);
	return 0;
}