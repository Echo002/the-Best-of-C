#include <stdio.h>
char* fun(char*,int);
int main()
{
	char s[128],*p;
	int count=0;
	scanf("%s",s);
	p=s;
	while(*p!='\0')
	{
		count++;
		p++; 
	}
	printf("s=%s,count=%d\n",fun(s,count),count);
} 
char* fun(char* s,int count)
{
	int i;
	char *p=s,temp;
	for(i=0;i<count/2;i++)
	{
		temp=*p;
		*p=*(p+count-i*2-1);
		*(p+count-i*2-1)=temp;
		p++;
	}
	return s;
}
