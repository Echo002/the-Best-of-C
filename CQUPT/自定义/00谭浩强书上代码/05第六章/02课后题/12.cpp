#include <stdio.h>
int main()
{
	char s[128],*p;
	scanf("%s",s);
	p=s;
	printf("before:%s\n",s);
	while(*p!='\0')
	{
		if(*p>='A'&&*p<='Z')
		{
			if(*p<('A'+'Z')/2)
			*p='Z'-(*p-'A');
			else
				*p='Z'-*p+'A';
		}
		if(*p>='a'&&*p<='z')
		{
			if(*p<('a'+'z')/2)
			*p='z'-(*p-'a');
			else
				*p='z'-*p+'a';
		}
		p++;
	}
	printf("after:%s\n",s);
}