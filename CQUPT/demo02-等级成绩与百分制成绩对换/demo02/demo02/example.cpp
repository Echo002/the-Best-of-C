#include <stdio.h>
int main()
{
	int grade;
	char r;
	scanf("%d",&grade);
	if(grade>100 || grade<0)
	{
		printf("error!\n");
		return -1;
	}
	grade = grade / 10;
	switch(grade)
	{
		case 9: r = 'A'; break;
		case 8: r = 'B'; break;
		case 7: r = 'C'; break;
		case 6: r = 'D'; break;
		default: r = 'E';
	}
	printf("%c\n",r);
	return 0;
}