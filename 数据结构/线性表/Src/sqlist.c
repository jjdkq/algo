/*
 * sqlist.c
 *
 *  Created on: 2018年7月14日
 *      Author: zhoubo
 */
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 1024
//typedef struct list
//{
//	int data[MAXSIZE];
//	int last;
//}sqlink;
//void CreatList(sqlink *L);
//void PrintfList(sqlink *L);
#include "sqlist.h"
void CreatList(sqlink *L)
{
	int tempno=1;
	int tempdata=0;
	do{
		printf("请输入顺序表第%d个元素:",tempno);
		scanf("%d",&tempdata);
		if(tempdata!=-1)
		{
			L->data[tempno-1]=tempdata;
			L->last=tempno-1;
			tempno++;
		}
	}while(tempno<=MAXSIZE&&tempdata!=-1);
}

void PrintfList(sqlink *L)
{
	int i;
	for(i=0;i<(L->last+1);i++)
	{
		printf("%d  ",L->data[i]);
	}
	printf("\n");
}
int InsertList(sqlink *L,int x,int i)
{
	int j;
	printf("你要在第%d个结点之前插入%d\n",i,x);
	if(L->last>=MAXSIZE)
	{
		printf("超出最大元素个数啦！\n");
		return 1;
	}
	else if(i<0||i>(L->last+1))
	{
		printf("插入位置有错！\n");
		return 1;
	}
	else
	{
		for(j=L->last;j>=i;j--)
		{
			L->data[j+1]=L->data[j];
		}
		L->data[i]=x;
		L->last++;
		return 0;
	}
}

int main(void)
{
	int x=0,i=0;
	sqlink *L=(sqlink *)malloc(sizeof(sqlink));
	CreatList(L);
	printf("你所输入的数为:\n");
	PrintfList(L);
	printf("请输入你要插入的元素和位置:\n");
	scanf("%d %d",&x,&i);
	InsertList(L,x,i);
	printf("插入元素之后线性表的元素为:\n");
	PrintfList(L);
	return 0;
}

