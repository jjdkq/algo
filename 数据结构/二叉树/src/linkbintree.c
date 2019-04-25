/*
 * linkbintree.c
 *
 *  Created on: 2018年8月27日
 *      Author: zhoubo
 */

#include "linkbintree.h"

//创建二叉树
//返回：二叉树结构体指针
BinTree *BinTreeCreate(void)
{
	BinTree *r;
	u8 ch;
	if((ch=getchar())=='#')
		return NULL;
	else
	{
		r=(BinTree *)malloc(sizeof(BinTree));						//申请空间
		r->data=ch;													//生成根节点
		r->lchild=BinTreeCreate();									//构造左子树
		r->rchild=BinTreeCreate();									//构造右子树
	}
	return r;
}

//前序遍历二叉树
void PreOrder(BinTree *r)
{
	if(r!=NULL)
	{
		printf(" %c",r->data);										//当前节点
		PreOrder(r->lchild);										//先序遍历左子树
		PreOrder(r->rchild);										//先序遍历右子树
	}
}

//中序遍历二叉树
void InOrder(BinTree *r)
{
	if(r!=NULL)
	{
		PreOrder(r->lchild);										//中序遍历左子树
		printf(" %c",r->data);										//当前节点
		PreOrder(r->rchild);										//中序遍历右子树
	}
}

//后序遍历二叉树
void PostOrder(BinTree *r)
{
	if(r!=NULL)
	{
		PostOrder(r->lchild);										//中序遍历左子树
		PostOrder(r->rchild);										//中序遍历右子树
		printf(" %c",r->data);										//当前节点
	}
}
