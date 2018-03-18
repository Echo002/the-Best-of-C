#include <stdio.h>
char* fun(int,char*);
int main()
{
	int n;char s[8];
	scanf("%d",&n);
	printf("%s",fun(n,s));
} 
char* fun(int n,char* s)
{
	int t[4],i,j=0;
	t[3]=n%10;
	t[2]=n/10%10;
	t[1]=n/100%10;
	t[0]=n/1000;
	for(i=0;i<7;i++)
	{
		s[i]=t[j]-0+'0';
		s[++i]=' ';	
		j++;	
	} 
	s[7]='\0';
	return s;
}