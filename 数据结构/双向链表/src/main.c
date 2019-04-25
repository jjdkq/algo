
#include "doubleLinkList.h"

int len;
int main()
{
    Node *head;
    int a = 10, *p;
    p = &a;
    printf("%16x  %8p\n", p, p);
    printf("请输入要建立双向链表的长度：\n");
    scanf("%d",&len);
    printf("请为双向链表赋值：\n");
    head = create_list(len);
    printf("链表的长度为：%d\n",len = len_list(len));
    printf("正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n请输入在链表头部插入结点的值：\n");
    head = start_insert_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n请输入在链表尾部插入结点的值：\n");
    head = end_insert_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n插入到任意位置之前：\n");
    head = insert_befor_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n插入到任意位置之后：\n");
    head = insert_after_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n删除头结点：\n");
    head = delect_start_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n删除尾结点：\n");
    head = delect_end_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    printf("\n删除指定位置的结点：\n");
    head = delect_list(head);
    printf("链表的长度为：%d",len = len_list(len));
    printf("\n正向遍历双向链表：\n");
    out_front_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));
    printf("\n反向遍历双向链表：\n");
    out_reverse_list(head);
    printf("\n链表的长度为：%d",len = len_list(len));

    return 0;
}
