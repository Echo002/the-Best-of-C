#include <stdio.h>
int main()
{
	char b[128];
	int i = 0;
	printf("a=%d A=%d\n",'a','A');
	gets(b);
	while(b[i] != 0)
	{
		if(b[i] > 'a' && b[i] < 'z')
		{
			b[i] = b[i] - 32;
			i++;
		}
		else if(b[i] > 'A' && b[i] < 'Z')
		{
			b[i] = b[i] + 32;
			i++;
		}
	}
	printf("%s\n",b);
	//puts(b);
}