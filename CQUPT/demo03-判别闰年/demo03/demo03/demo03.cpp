#include <stdio.h>
int main()
{
	int year;
	while(1)
	{
	scanf("%d",&year);
	if((year%400==0)||((year%4==0)&&(year%100!=0)))
		printf("yes\n");
	else
		printf("no\n");
	}
	return 0;
}