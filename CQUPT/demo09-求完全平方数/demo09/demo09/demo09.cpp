#include <stdio.h>
#include <math.h>

int main()
{
	int min,max,i,re;
	puts("请输入下限和上限，用逗号隔开");
	scanf("%d,%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		re = (int)sqrt((float)i);
		if(i == re*re)
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
}