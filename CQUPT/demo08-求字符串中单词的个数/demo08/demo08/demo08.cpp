#include <stdio.h>
#include <string.h>
#define N 30
int main()
{
	char b[N],i,num,count=1;
	puts("������һ���ַ���");
	gets(b);
	num=strlen(b);
	for(i=0;i<num;i++)
	{
		if(i!=0 && b[i] ==' ' && b[i+1]!=' ')
			count++;
	}
	printf("һ����%d������\n",count);
}