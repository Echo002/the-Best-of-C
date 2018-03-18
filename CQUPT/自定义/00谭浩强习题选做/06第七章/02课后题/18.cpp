#include <stdio.h>
double fun(double,int);
int main()
{
	int year,month,day,charge,i,sum=0;
	int m[12]={31,0,31,30,31,30,31,31,30,31,30};
	scanf("%d %d %d",&year,&month,&day);
	charge=((year%4&&year%100!=0)||(year%400));
	switch(charge)
	{
	case 1:m[1]=29;break;
	case 0:m[1]=28;break;
	}
	for(i=0;i<month-1;i++)
	sum=sum+m[i];
	sum+=day;
	printf("µÚ%dÌì\n",sum);
	return 0;
} 