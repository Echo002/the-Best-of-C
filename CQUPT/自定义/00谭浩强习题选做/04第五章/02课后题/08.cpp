#include <stdio.h>
void main()
{
	int i,g,s,b;
	for(i=100;i<=999;i++)
	{
		g=i%10;
		s=i/10%10;
		b=i/100;
		if(g*g*g+s*s*s+b*b*b==i)
			printf("%d\n",i);
	}
}