#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node* next;
}Node;
typedef struct list
{
	struct node* head;
}List;

void initlist(List*);
void freelist(List*);
int addnode(List*,int);
void display(List*,int);
int main()
{
	List demo;
	int i;
	initlist(&demo);
	int count;
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		addnode(&demo,count-i);
	}
	display(&demo,count);
	freelist(&demo);
	return 0;
}

void initlist(List* demo)
{
	demo->head=NULL;
}

void freelist(List* demo)
{
	Node*p,*q;
	p=demo->head;
	while(p!=NULL)
	{
		q=p->next;
		free(p);
		p=q;
	}
}

int addnode(List* demo,int count)
{
	Node *p,*q;
	q=(Node *)malloc(sizeof(Node));
	q->data=count;
	p=demo->head;	
	if(p==NULL)
	{
		demo->head=q;
		q->next=q;
	}
	else
	{
		q->next=p;
		demo->head=q;
	} 
}

void display(List* demo,int count)
{
	Node* p;
	int i;
	p=demo->head;
	for(i=0;i<count;i++)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}
