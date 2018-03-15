#include <stdio.h>
#include <math.h>
int judge(int);
int main()
{
	int num;
	scanf("%d",&num);
	if(judge(num))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
int judge(int num)
{
	int i;
	for(i=2;i<sqrt(num);i++)
		if(num%i==0)
			return 1;
		return 0;
}
