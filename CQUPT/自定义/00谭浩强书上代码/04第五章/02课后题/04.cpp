#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
	char s[128],*p;
	int a[3]={0};
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p==' ')
			a[0]++;
		if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
			a[1]++;
		if(*p>='0'&&*p<='9')
			a[2]++;
		p++;
	}
	printf("%d %d %d",a[0],a[1],a[2]);
}
