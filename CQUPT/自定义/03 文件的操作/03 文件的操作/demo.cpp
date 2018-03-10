#include  <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp = fopen("C:\\Users\\Peppa\\Desktop\\demo.txt","w");
	if(fp == NULL)
	{
		printf("error!\n");
		exit(0);
	}
	char *s = "string";
	for( ; *s != '\0';s++)
		fputc(*s,fp);
	fclose(fp);
	fp = fopen("C:\\Users\\Peppa\\Desktop\\demo.txt","r");
	char ch;
	ch = fgetc(fp);
	putchar(ch);
	fclose(fp);
	return 0;
}