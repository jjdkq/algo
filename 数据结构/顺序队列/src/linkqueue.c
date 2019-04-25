/*
 * linkqueue.c
 *
 *  Created on: 2018年7月24日
 *      Author: zhoubo
 */
#include "linkqueue.h"
//设置空队
void SetEmpty(linkqueue *q)
{
	q->front=(linklist *)malloc(sizeof(linklist));			//生成头结点
	q->rear=(linklist *)malloc(sizeof(linklist));				//生成头结点
	q->front->next=NULL;
	q->rear->next=NULL;
	q->front=q->rear;
}
//判断是否是空队
//返回值：1，是空队；0，不是空队
int IsEmpty(linkqueue *q)
{
	return ((q->front==q->rear)? 1:0);
}
//元素入队
void QueueIn(linkqueue *q,int x)
{
	q->rear->next=malloc(sizeof(linklist));						//新节点加入队尾
	q->rear=q->rear->next;										//修改队尾指针
	q->rear->data=x;											//数据存入节点
	q->rear->next=NULL;
}
//取队头元素
int ShowFront(linkqueue *q)
{
	if(IsEmpty(q))
	{
		printf("队列已空！\n");
		return NULL;
	}
	else
	{
		return q->front->data;									//返回队头元素的值
	}
}
//元素出队
//返回值：1，出队失败（是空队）；0，出队成功
int QueueOut(linkqueue *q,int *x)
{
	if(IsEmpty(q))
	{
		printf("\n队列已空！\n");
		return 1;
	}
	else
	{
		linklist *s;											//定义一个指向节点的辅助指针
		s=q->front;												//让它指向头结点
		q->front=q->front->next;								//让队头元素作为新的头结点
		*x=q->front->data;										//返回原队头元素的值
		free(s);												//释放原头结点
		return 0;
	}
}
