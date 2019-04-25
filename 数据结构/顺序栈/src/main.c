/*
 * main.c
 *
 *  Created on: 2018年7月18日
 *      Author: zhoubo
 */
#include "linkstack.h"
int main(void)
{
	int x=0,i=0;
	linkstack *s=(linkstack *)malloc(sizeof(linkstack));  			//为栈申请空间
	InitStack(s);													//初始化栈
	while(x!=-1)
	{
		i++;
		if(i==1)
			printf("请输入要进栈的元素：\n");
		scanf("%d",&x);
		if(x==-1)
			break;
		StackPush(s,x);												//元素进栈
	}
	i=0;
	printf("栈中的元素为:\n");
	while(!IsEmpty(s))												//不是空栈
	{
		StackPop(s,&i);												//元素出栈
		printf("%d  ",i);
	}
	return 0;
}

