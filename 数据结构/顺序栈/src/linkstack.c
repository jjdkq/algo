/*
 * linkstack.c
 *
 *  Created on: 2018年7月18日
 *      Author: zhoubo
 */
#include "linkstack.h"
//初始化栈
void InitStack(linkstack *s)
{
	s->next=NULL;
}
//元素进栈
void StackPush(linkstack *s,int x)
{
	linkstack *p;								//定义辅助指针
	p=(linkstack *)malloc(sizeof(linkstack));	//生成一个新节点
	p->data=x;									//将待插入数据存入新节点的数据域中
	p->next=s->next;							//新节点插入原栈顶之上
	s->next=p;
}
//判断是否是空栈
//返回值：0，不是空栈；1，是空栈
int IsEmpty(linkstack *s)
{
	if(s->next==NULL)
		return 1;
	return 0;
}
//元素出栈
//返回值：NULL，出栈失败（是空栈）；其他，新的栈顶指针
linkstack *StackPop(linkstack *s,int *x)
{
	linkstack *p=s->next;								//定义辅助指针
	if(s==NULL)
	{
		printf("是空栈\n");
		return NULL;
	}
	else
	{
		*x=p->data;								//取出数据
		s->next=p->next;						//将栈顶调整到新位置
		free(p);								//释放原栈顶节点
		return s;								//返回新的栈顶指针
	}
}
