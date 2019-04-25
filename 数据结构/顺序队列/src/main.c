/*
 * main.c
 *
 *  Created on: 2018年7月24日
 *      Author: zhoubo
 */
#include "linkqueue.h"
int main(void)
{
	linkqueue *q=malloc(sizeof(linkqueue));
	int i=1;
	int x=0;
	SetEmpty(q);										//设置空队
	printf("请输入要入队的第%d个元素：",i);
	scanf("%d",&x);
	while(x!=-1)
	{
		QueueIn(q,x);
		i++;
		printf("请输入要入队的第%d个元素：",i);
		scanf("%d",&x);
	}
	printf("现在开始出队...\n");
	printf("队列中的元素的值为：\n");
	while(1)
	{
		if(!QueueOut(q,&x))
			printf("%d  ",x);
		else
			break;
	}
	return 0;
}

