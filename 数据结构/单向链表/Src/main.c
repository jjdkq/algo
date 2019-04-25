/*
 * main.c
 *
 *  Created on: 2018年7月15日
 *      Author: zhoubo
 */
#include "linklist.h"
int main(void)
{
	link *L,*temp;
	int no,i;
	L=(link *)malloc(sizeof(link));		//为链表L申请结点
	L->next=NULL;
	CreatList(L);						//创建链表
	printf("你所输入的数为:\n");
	PrintfList(L);						//打印链表
	printf("\n请输入要查找的位置：");
	scanf("%d",&no);
	temp=GetList(L,no-1);				//按序号查找链表
	if(temp!=NULL)
		printf("查找到的数为：%d\n",temp->data);
	else
		printf("你所查找的位置不存在\n");
	printf("请输入要查找的数：");
	scanf("%d",&no);
	temp=LocateList(L,no);				//按位置查找链表（定位）
	if(temp!=NULL)
		printf("你所要查找到的数的位置为：%d\n",*(temp->next));
	else
		printf("你所查找的数不存在\n");
	printf("请输入要插入的数和位置：\n");
	scanf("%d  %d",&no,&i);
	InsertList(L,no,i);					//在链表的第i个元素之前插入一个新的元素
	printf("插入元素之后的元素列表为:\n");
	PrintfList(L);
	printf("\n请输入要删除的数的位置：\n");
	scanf("%d",&no);
	DeleteList(L,no);					//按值删除链表中的元素
	printf("删除元素之后的元素列表为:\n");
	PrintfList(L);
	InversionList(L);					//将链表倒置
	printf("\n将链表倒置之后的元素列表为:\n");
	PrintfList(L);
	printf("\n");
	link *A,*B;
	A=(link *)malloc(sizeof(link));
	A->next=NULL;
	B=(link *)malloc(sizeof(link));
	B->next=NULL;
	CreatList(A);
	CreatList(B);
	MergeList(A,B);						//将链表A、B合并成新的表A
	printf("将两链表合并之后的元素列表为：\n");
	PrintfList(A);
	printf("this is a tset");
	return 0;
}

