/*
 * doubleLinkList.h
 *
 *  Created on: 2019年4月12日
 *      Author: zhoubo
 */

#ifndef DOUBLELINKLIST_H_
#define DOUBLELINKLIST_H_

#include <stdio.h>
#include <stdlib.h>

//定义双向链表的节点
typedef struct Node
{
    int data;
    struct Node *prior;
    struct Node *next;
}Node;

//函数的声明
    Node* create_node(void);               //定义双向链表的节点
    Node* create_list(int n);              //建立含有N个结点的双向链表
    int len_list(int len);                 //链表的长度
    Node* pos_list(Node *head,int n);      //定位到链表的任意位置
    Node* tail_list(Node *head);           //将指针定位在链表的尾部
    void out_front_list(Node *head);       //正向遍历一个链表
    void out_reverse_list(Node *head);     //反向遍历一个链表
    Node* start_insert_list(Node *head);   //在链表的头部插入结点
    Node* end_insert_list(Node *head);     //在链表的尾部插入结点
    Node* insert_befor_list(Node *head);   //插入到任意位置之前
    Node* insert_after_list(Node *head);   //插入到任意位置之后
    Node* delect_start_list(Node *head);   //删除头结点
    Node* delect_end_list(Node *head);     //删除尾结点
    Node* delect_list(Node *head);         //删除指定位置的节点

#endif /* DOUBLELINKLIST_H_ */
