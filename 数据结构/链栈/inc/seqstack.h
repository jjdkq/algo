#ifndef SEQSTACK_H_
#define SEQSTACK_H_
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 64							//定义栈容量
typedef struct
{
	int data[MAXSIZE];						//用数组作为栈的存储空间
	int top;								//指示栈顶位置的变量
}seqstack;
void CreateStack(seqstack *s);				//创建一个顺序栈
seqstack* StackPush(seqstack *s,int x);		//元素进栈
int IsEmpty(seqstack *s);					//判断是否是空栈
int StackPop(seqstack *s);					//元素出栈
int ShowPop(seqstack *s);					//取栈顶元素
#endif
