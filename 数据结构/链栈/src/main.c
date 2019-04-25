/*
 * main.c
 *
 *  Created on: 2018年7月18日
 *      Author: zhoubo
 */
#include "seqstack.h"
int main(void)
{
	int i=0;
	seqstack *s;							//定义指向顺序栈的指针
	s=(seqstack *)malloc(sizeof(seqstack));	//为s申请一个空间
	CreateStack(s);							//创建顺序栈
	printf("栈顶元素为：\n");
	printf("%d\n",ShowPop(s));				//打印栈顶元素
	while(!IsEmpty(s))
	{
		i++;
		if(i==1)
			printf("栈中的元素为：\n");
		printf("%d  ",StackPop(s));			//出栈
	}
	printf("\n请输入要进栈的元素：");
	scanf("%d",&i);
	StackPush(s,i);
	i=0;
	while(!IsEmpty(s))
	{
		i++;
		if(i==1)
			printf("元素进栈后栈中的元素为：\n");
		printf("%d  ",StackPop(s));			//出栈
	}
	return 0;
}

