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

void initlist(List *list);							//����ĳ�ʼ��
int addnode(List *list , Node *node);	//����µĽڵ�
void freelist(List *list);						//�ͷ�����
void displaylist(List *list);					//��������
void findbynum(List *list,int num);		//ͨ����������
void findbystr(List *list,char *s);		//ͨ����������

int main()
{
	List demo;
	int number , charge , stu_num;
	char string[8];
	initlist(&demo);
	Node student;
	printf("ϣ�����ѧ����������");
	scanf("%d",&stu_num);
	printf("����������,�����·�����%dλѧ������Ϣ,����Ϊѧ�š����������ö��Ÿ�����\n",stu_num);
	for(int i = 0 ; i<stu_num ; i++)
	{
		scanf("%d,%s",&number,string);
		student.info.num = number;
		strcpy(student.info.name , string);
		addnode(&demo , &student);	
	}
	
	while(1)
	{
		printf("�����·�ѡ��������Ĳ�����\n1��ͨ��ѧ�Ų���\t2��ͨ����������\n");
		scanf("%d",&charge);
		switch(charge)
		{
			case 1 : 
				{
					int find_num;
					puts("������Ҫ�ҵ�ѧ��");
					scanf("%d",&find_num);
					findbynum(&demo,find_num); 
					continue;
				}
			default : printf("����������������룡");
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
			printf("��%d��Ԫ��Ϊ���ҽڵ�\n",n);
		n++;
		p = p->next;
	}
	if(n == 1)
		printf("���������Ľڵ㲻���ڣ�\n");
}

void findbystr(List *list,char *s)
{

}