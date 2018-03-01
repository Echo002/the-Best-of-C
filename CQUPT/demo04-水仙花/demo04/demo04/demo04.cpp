#include <stdio.h>
int check(int i);
int main()
{
	int max,min,i;
	printf("请输入最小值和最大值(三位数)：");
	scanf("%d,%d",&min,&max);
	for(i=min;i<max;i++)
	{
		if(check(i)==1)
			printf("%d\t",i);
	}
	return 0;
}

int check(int num)
{
	int i=num;
	int count,sum=0;
	while(i>0)
	{
		count=i%10;
		sum = sum+count*count*count;
		i=i/10;
	}
	if(sum==num)
		return 1;
	else return 0;
}