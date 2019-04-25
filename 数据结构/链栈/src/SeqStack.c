/*
 ============================================================================
 Name        : SeqStack.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "seqstack.h"
//创建顺序栈
void CreateStack(seqstack *s)
{
	int tempdata;
	int i=1;
	s->top=-1;
	do{
		printf("请输入入栈第%d个数的值:",i);
		scanf("%d",&tempdata);
		if(tempdata!=-1)
		{
			s->top++;
			s->data[s->top]=tempdata;
		}
		i++;
	}while(i<=MAXSIZE&&tempdata!=-1);
}
//元素进栈
seqstack* StackPush(seqstack *s,int x)
{
	if(s->top==MAXSIZE-1)
	{
		printf("栈溢出");
		return NULL;
	}
	else
	{
		s->top++;
		s->data[s->top]=x;
	}
	return s;
}
//判断是否是空栈
//返回值：0，不是空栈；1，是空栈
int IsEmpty(seqstack *s)
{
	return ((s->top>=0)?0:1);
}
//元素出栈
//返回值：0，出栈失败（空栈）；其他,出栈的元素
int StackPop(seqstack *s)
{
	if(IsEmpty(s))					//是空栈
	{
		printf("是空栈\n");
		return 0;
	}
	else
		return s->data[s->top--];
}
//取栈顶元素
//返回值：0，失败（是空栈）；其他，取出的栈顶元素
int ShowPop(seqstack *s)
{
	if(IsEmpty(s))					//是空栈
	{
		printf("是空栈\n");
		return 0;
	}
	else
		return s->data[s->top];
}
