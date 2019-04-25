/*
 * sqlist.h
 *
 *  Created on: 2018年7月15日
 *      Author: zhoubo
 */

#ifndef SQLIST_H_
#define SQLIST_H_
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1024
typedef struct
{
	int data[MAXSIZE];
	int last;
}sqlink;
void CreatList(sqlink *L);
void PrintfList(sqlink *L);
int InsertList(sqlink *L,int x,int i);
#endif /* SQLIST_H_ */
