#include <stdio.h>
#include <stdlib.h>
typedef struct Stu{
	int num;
	char name[10];
	float score;
	struct Stu *next;
}stu;
void link_create(stu **head,stu *p_new); 
void link_print(stu *p_head); 
void link_free(stu **p_head);
void link_delete(stu **p_head,int num);
int main()
{
	stu *head=NULL,*p_new=NULL;
	int num,stu_num;
	printf("想要初始化几个节点\n");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		p_new=(stu *)malloc(sizeof(stu));
		printf("请输入学号、姓名、分数\n");
		scanf("%d %s %f",&p_new->num,p_new->name,&p_new->score);
		link_create(&head,p_new);	
	}
	link_print(head);
	while(1)
	{
		printf("请输入您要删除的节点\n");
		scanf("%d",&stu_num);
		link_delete(&head,stu_num);
		link_print(head);
	}
	
	//link_free(&head);
	link_print(head);
//	printf("success");
	return 0;	
}
void link_create(stu **p_head,stu *p_new)
{
	stu *move=*p_head;
	if(move==NULL)
	{
		*p_head=p_new;
		p_new->next=NULL;
	}
	else
	{
	
		while(move->next!=NULL)
		{
			move=move->next;
		}
		move->next=p_new;
		p_new->next=NULL;
	}	
}
void link_print(stu *p_head)
{
	while(p_head!=NULL)
	{
		printf("%d %s %f\n",p_head->num,p_head->name,p_head->score);
		p_head=p_head->next;
	}
}
void link_free(stu **p_head)
{ 
	stu *ch; 
	while(*p_head!=NULL)
	{
		ch=*p_head;
		*p_head=ch->next; 
		free(ch);
	}
}
void link_delete(stu **p_head,int num)
{
	stu *pb,*pf;
	pb=pf=*p_head;
	if(*p_head==NULL)
	{ 	
		printf("该链表为空，没有您要删除的节点\n");
		return ;
	}
	while((pb->num!=num)&&(pb->next!=NULL))
	{
		pf=pb;
		pb=pb->next;	
	}
	if(pb->num==num)
	{
		if(pb==*p_head)
		{
			*p_head=(*p_head)->next;
			free(pb); 
		}
		else
		{
			pf->next=pb->next;
			free(pb);
		}
	}
	else
	{
		printf("没有您要删除的节点\n");
	}
	 
}
