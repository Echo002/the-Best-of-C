#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stu{
	int num;
	char name[10];
	float score;
	struct Stu *next;
}stu;
void link(struct Stu **p_head,struct Stu *P_new);
void print(stu *ch);
stu *search_num(stu *ch1,int number);
stu *search_name(stu *ch2,char *name);
//void free_stu(stu *ch);
int main()
{
	int stu_num;
	float count=0,i;
	char name[10];
	stu *head=NULL,*p_new=NULL,*test; 
	for(i=0;i<3;i++)
	{
		p_new=(stu *)malloc(sizeof(stu));
		printf("请输入学号、姓名、分数:\n");
		scanf("%d %s %f",&p_new->num,p_new->name,&p_new->score);
		count+=p_new->score;
		link(&head,p_new);
	}
	printf("平均成绩：%f\n",count/3);
	print(head);
	while(1)
	{
		printf("请输入要查找的学号\n");
		scanf("%d",&stu_num);
		test=search_num(head,stu_num);
		if(test!=NULL)
		printf("%d %s %f\n",test->num,test->name,test->score);
		else
		{ 
		printf("查找错误\n");
		break;
	    }
	}
	while(1)
	{
	printf("请输入要查找的学生名\n");
	scanf("%s",name);
	test=search_name(head,name);
	if(test!=NULL)
	printf("%d %s %f\n",test->num,test->name,test->score);
	else
	{
		printf("请重新输入\n");
		break;
	} 
    }
	//free_stu(head);		
	return 0;	
 }
  void link(stu **p_head,stu *p_new)
  {
  		stu *move=*p_head;
  		if(*p_head==NULL)
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
 void print(stu *ch)
 {
 	while(ch!=NULL)
	{
		printf("%d %s %f\n",ch->num,ch->name,ch->score);
		ch=ch->next;
	}	
 } 
 stu *search_num(stu *ch1,int number)
 {
 	stu *ch2=ch1;
 	while(ch2!=NULL)
 	{
 		if(ch2->num==number)
 		return ch2;
		ch2=ch2->next; 	
	}
	return NULL;
 }
 stu *search_name(stu *ch2,char *name)
 {
 	stu *stu_name=ch2;
 	while(stu_name!=NULL)
 	{
 	 	if(strcmp(stu_name->name,name)==0)
 			return stu_name;
		stu_name=stu_name->next;
	}
	return NULL;

 }
