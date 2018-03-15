#include <stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
		printf("%c",c-'A'-'a');
	if(c>='a'&&c<='z')
		printf("%c\n",c-'a'+'A');
	return 0;
}