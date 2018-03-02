#include <stdio.h>
int check(int count);
int main()
{
	int i;
	for(i=2;i<=100;i++)
		if(check(i) == 1)
			printf("%d\t",i);
	return 0;
}
int check(int count)
{
	int i;
	for(i=2;i<=count/2;i++)
		if(count%i == 0)
			return 0;
	return 1;
}