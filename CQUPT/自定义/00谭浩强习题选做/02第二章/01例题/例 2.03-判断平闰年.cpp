#include <stdio.h>
int judgeyear(int);
int main()
{
	int year;
	scanf("%d",&year);
	if(judgeyear(year))
		printf("Yes\n");
	else printf("No\n");
	
	return 0;
}
int judgeyear(int year)
{
	return ((year%4==0)&&(year%100!=0))||(year%400==0);
}