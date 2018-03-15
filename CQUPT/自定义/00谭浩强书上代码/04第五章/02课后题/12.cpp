#include <stdio.h>
int main()
{
	int num=1,i=1;
	while(i<10)
	{
		num=(num+1)*2;
		i++;
	}
	printf("%d\n",num);
	return 0;
}