/*
 * bubblesort.c
 *
 *  Created on: 2018年8月31日
 *      Author: zhoubo
 */

#include <stdlib.h>
#include <stdio.h>
#include "sqlist.h"

//int num[]=
//{
//	12,15,52,14,96,34,3,
//	15,18,4,59,63,24,8
//};
//#define SIZE sizeof(num)/sizeof(num[0])

sqlink *L;										//顺序表结构体指针
//升序排序
void BubbleSort_Ascending(void)
{
	int i,j,temp=0;
	L=(sqlink *)malloc(sizeof(sqlink));			//为顺序表申请空间
	CreatList(L);
	printf("你所输入的数为:\n");
	PrintfList(L);
#define  SIZE (L->last+1)						//顺序表长度
	for(i=0;i<SIZE-1;i++)						//趟扫描
	{
		for(j=0;j<SIZE-i-1;j++)					//行扫描
		{
			if(L->data[j]>L->data[j+1])			//后一位数比前一位小则交换位置（升序）
			{
				temp=L->data[j+1];
				L->data[j+1]=L->data[j];
				L->data[j]=temp;
			}
		}
	}
	printf("冒泡排序的升序排序\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d  ",L->data[i]);
	}
}

//降序排序
void BubbleSort_Desceding(void)
{
	int i,j,temp=0;
	for(i=0;i<SIZE-1;i++)						//趟扫描
	{
		for(j=0;j<SIZE-i-1;j++)					//行扫描
		{
			if(L->data[j]<L->data[j+1])			//后一位数比前一位大则交换位置（降序）
			{
				temp=L->data[j+1];
				L->data[j+1]=L->data[j];
				L->data[j]=temp;
			}
		}
	}
	printf("\n冒泡排序的降序排序\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d  ",L->data[i]);
	}
}
