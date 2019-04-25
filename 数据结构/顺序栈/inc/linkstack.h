/*
 * linkstack.h
 *
 *  Created on: 2018年7月18日
 *      Author: zhoubo
 */

#ifndef LINKSTACK_H_
#define LINKSTACK_H_
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}linkstack;
void InitStack(linkstack *s);							//初始化栈
void StackPush(linkstack *s,int x);						//元素进栈
int IsEmpty(linkstack *s);								//判断是否是空栈
linkstack *StackPop(linkstack *s,int *x);				//元素出栈
#endif /* LINKSTACK_H_ */
