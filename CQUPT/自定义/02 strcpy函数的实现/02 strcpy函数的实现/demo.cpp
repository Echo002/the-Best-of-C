#include <stdio.h>
#include <string.h>

char *copystring(char *s1 , char *s2);

int main()
{
	char s1[128] , s2[128];
	printf("������s1�ַ���\n");
	scanf("%s",s1);
	printf("������s2�ַ���\n");
	scanf("%s",s2);
	printf("��strcpy����ʵ�ֵ����s1�ַ���%s\n",copystring(s1,s2));
	printf("��strcpy����ʵ�ֵ����s1�ַ���%s\n",strcpy(s1,s2));

}

char* copystring(char *s1 , char *s2)
{
	char *p1 , *p2;
	p1 = s1;
	p2 = s2;
	while(*p2 != '\0')
		*(p1++) = *(p2++);
	*p1 = '\0';
	return s1;
}