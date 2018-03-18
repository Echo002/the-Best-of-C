#include <stdio.h>
int fun1();
int fun2();
void main()
{
	printf("%d  %d\n",fun1(),fun2());
}

int fun1()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
		sum+=i;
	return sum;
}

int fun2()
{
	int i=1,sum=0;
	do{
		sum+=i;
		i++;
	}while(i<=100);
	return sum;
}