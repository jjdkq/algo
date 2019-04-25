/*
 * linklist.h
 *
 *  Created on: 2018年7月15日
 *      Author: zhoubo
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_
#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}link;
void CreatList(link *L);				//创建单链表
link *GetList(link *,int);				//按序号查找某一个元素
link *LocateList(link *,int);			//按值查找某一个元素
void PrintfList(link *L);				//打印单链表的元素
void InsertList(link *L,int x,int i);	//单链表的插入
void DeleteList(link *L,int i);			//单链表的删除
void InversionList(link *L);			//单链表的倒置
void MergeList(link *A,link *B);			//单向链表的合并
#endif /* LINKLIST_H_ */
