/*
 * linkbintree.h
 *
 *  Created on: 2018年8月27日
 *      Author: zhoubo
 */

#ifndef LINKBINTREE_H_
#define LINKBINTREE_H_
#include <stdio.h>
#include <stdlib.h>
#define u8 unsigned char
//链式二叉树结构体
typedef struct BitNode
{
	u8 data;									//根节点
	struct BitNode *lchild;						//左子树
	struct BitNode *rchild;						//右子树
}BinTree;

BinTree *BinTreeCreate(void);					//创建二叉树
void PreOrder(BinTree *r);						//前序遍历
void InOrder(BinTree *r);						//中序遍历
void PostOrder(BinTree *r);						//后序遍历

#endif /* LINKBINTREE_H_ */
