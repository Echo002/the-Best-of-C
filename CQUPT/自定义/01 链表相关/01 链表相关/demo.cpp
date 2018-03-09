#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N sizeof(Node)

typedef struct Data{
	int num;
	char name[8];
}Data;

typedef struct Stu{
	Data info;
	struct Stu *next;
}Node;

typedef struct List{
	Node *node;
}List;

void initlist(List *list);							//链表的初始化
int addnode(List *list , Node *node);	//添加新的节点
void freelist(List *list);						//释放链表
void displaylist(List *list);					//遍历链表
void findbynum(List *list,int num);		//通过姓名查找
void findbystr(List *list,char *s);		//通过姓名查找

int main()
{
	List demo;
	int number , charge , stu_num;
	char string[8];
	initlist(&demo);
	Node student;
	printf("希望添加学生的数量：");
	scanf("%d",&stu_num);
	printf("链表建立进程,请在下方输入%d位学生的信息,依次为学号、姓名，并用逗号隔开：\n",stu_num);
	for(int i = 0 ; i<stu_num ; i++)
	{
		scanf("%d,%s",&number,string);
		student.info.num = number;
		strcpy(student.info.name , string);
		addnode(&demo , &student);	
	}
	
	while(1)
	{
		printf("请在下方选择接下来的操作：\n1、通过学号查找\t2、通过姓名查找\n");
		scanf("%d",&charge);
		switch(charge)
		{
			case 1 : 
				{
					int find_num;
					puts("请输入要找的学号");
					scanf("%d",&find_num);
					findbynum(&demo,find_num); 
					continue;
				}
			default : printf("输入错误！请重新输入！");
		}
	}
	
	//displaylist(&demo);
	freelist(&demo);
}

void initlist(List *list){
	list ->node = NULL;
}

void freelist(List *list)
{
	Node *p , *q;
	p = list->node;
	while(p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}
}

int addnode(List *list , Node *node)
{
	Node *p,*q;
	q = (Node *)malloc(N);
	strcpy(q->info.name , node ->info.name);
	q->info.num = node->info.num;
	q->next = NULL;
	p = list->node;
	if(p == NULL)
	{
		list->node = q;
		q->next = NULL;
		return 1;
	}
	while(p->next != NULL)
		p = p->next;
	p->next = q;

}

void displaylist(List *list)
{
	Node *p;
	p = list->node;
	while(p != NULL)
	{
		printf("name = %s , num = %d\n",p->info.name,p->info.num);
		p = p->next;
	}
}

void findbynum(List *list,int num)
{
	int n = 1;
	Node *p;
	p = list->node;
	while(p != NULL)
	{
		if(p ->info.num == num)
			printf("第%d个元素为所找节点\n",n);
		n++;
		p = p->next;
	}
	if(n == 1)
		printf("满足条件的节点不存在！\n");
}

void findbystr(List *list,char *s)
{

}