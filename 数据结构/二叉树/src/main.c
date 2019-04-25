/*
 * main.c
 *
 *  Created on: 2018年8月27日
 *      Author: zhoubo
 */

#include "linkbintree.h"
int main(void)
{
	BinTree *r;
	printf("请按前序的方式输入二叉树的节点元素");
	r=BinTreeCreate();
	//前序遍历输出
	printf("前序遍历输出:\t");
	PreOrder(r);
	printf("\n");
	//中序遍历输出
	printf("中序遍历输出:\t");
	InOrder(r);
	printf("\n");
	//后序遍历输出
	printf("后序遍历输出:\t");
	PostOrder(r);
}
