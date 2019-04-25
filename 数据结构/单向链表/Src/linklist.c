/*
 * linklist.c
 *
 *  Created on: 2018年7月15日
 *      Author: zhoubo
 */
#include "linklist.h"
void CreatList(link *L)						  //创建单链表
{
	int a,i=1;
	link *P,*r;
	r=L;
	printf("请输入单向链表的第%d个元素:",i);
	scanf("%d",&a);
	while(a!=-1)
	{
		P=(link *)malloc(sizeof(link));		//为P申请结点
		P->data=a;
		r->next=P;
		r=P;
		i++;
		printf("请输入单向链表的第%d个元素:",i);
		scanf("%d",&a);
	}
	r->next=NULL;
}
void PrintfList(link *L)					//打印单链表的元素
{
	link *P;
	P=L->next;
	while(P)
	{
		setbuf(stdout,0);
		printf("%d ",P->data);
		P=P->next;						//P指向P的后驱
	}
}
link *GetList(link *L,int i)			//查找某一个位置的元素值
{
	int j=-1;
	link *P=L;
	if(i<0)
		return NULL;
	while(P->next&&j<i)
	{
		P=P->next;
		j++;
	}
	if(i==j)
		return P;
	else
		return NULL;					//查找失败，i>表长
}
link *LocateList(link *L,int x)			//按元素值查找位置
{
	link *P=L->next;
	while(P&&P->data!=x)
		P=P->next;
	return P;
}
void InsertList(link *L,int x,int i)	//插入元素值
{
	link *p,*q;
	if(i==0)
		p=L;
	else
		p=GetList(L,i-1);
	q=(link *)malloc(sizeof(link));
	q->data=x;
	q->next=p->next;
	p->next=q;
}
void DeleteList(link *L,int i)			//删除某个元素值
{
	link *p,*q;
	if(i==0)
		p=L;
	else
		p=GetList(L,i-1);				//获得第i个元素的值
	if(p&&p->next)
	{
		q=p->next;
		p->next=q->next;
		free(q);
	}
}
void InversionList(link *L)				//单链表的倒置
{
	link *p,*q;			
	p=L->next;							//令指针p指向结点a0
	L->next=NULL;						//将原链表置空
	while(p)
	{
		q=p;
		p=p->next;
		q->next=L->next;				//将结点ai插到头结点之后
		L->next=q;
	}
}
void MergeList(link *A,link *B)			//单向链表的合并
{
	link *r,*p,*q;
	p=A->next;
	q=B->next;
	r=A;
	free(B);
	while(p&&q)
	{
		if(p->data<=q->data)
		{
			r->next=p;
			r=p;
			p=p->next;
		}
		else
		{
			r->next=q;
			r=q;
			q=q->next;
		}
	}
	if(p==NULL)
		p=q;
	r->next=p;
}
