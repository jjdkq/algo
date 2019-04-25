/*
 * linkqueue.h
 *
 *  Created on: 2018年7月24日
 *      Author: zhoubo
 */

#ifndef LINKQUEUE_H_
#define LINKQUEUE_H_
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;											//数据域
	struct node *next;									//链接指针域
}linklist;												//链表元素类型定义
typedef struct
{
	linklist *front,*rear;								//链队列指针
}linkqueue;												//链队列类型定义
linkqueue *q;											//定义指向链队列的指针
void SetEmpty(linkqueue *q);							//设置空队
int IsEmpty(linkqueue *q);								//判断是否是空队
void QueueIn(linkqueue *q,int x);						//元素入队
int ShowFront(linkqueue *q);							//取队头元素
int QueueOut(linkqueue *q,int *x);							//元素出队

#endif /* LINKQUEUE_H_ */
