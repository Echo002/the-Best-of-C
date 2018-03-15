#include <stdio.h>
#include <math.h>
int main()
{
	int score;
	char r;
	scanf("%d",&score);
	int a=score/10;
	switch(a)
	{
	case 10:
	case 9:r='A';break;
	case 8:r='B';break;
	case 7:r='C';break;
	case 6:r='D';break;
	default:r='E';break;
	}
	return 0;
}