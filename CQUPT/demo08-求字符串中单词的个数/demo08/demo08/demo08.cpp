#include <stdio.h>
#include <string.h>
#define N 30
int main()
{
	char b[N],i,num,count=1;
	puts("请输入一段字符串");
	gets(b);
	num=strlen(b);
	for(i=0;i<num;i++)
	{
		if(i!=0 && b[i] ==' ' && b[i+1]!=' ')
			count++;
	}
	printf("一共有%d个单词\n",count);
}