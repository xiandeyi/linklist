#include "myinclude.h"
#include <time.h>
#include <math.h>

typedef struct LNode
{
	int data;
	LNode *next;
}LNode, *LinkList;

void create_L(LinkList &L, int n)  // 链表的创建
{
	LinkList p;
	int i;
	L = (LinkList) malloc (sizeof(LNode));
	L->data = n;
	L->next = NULL;
	for(i = 0; i < n; i++)
	{
		p = (LinkList) malloc (sizeof(LNode));
		srand(time(0) * i - int(pow(3, i)));  // 利用srand()函数生成随机数种子 
		p->data = rand();  // 令链表的元素值为随机数值 
		p->next = L->next;
		L->next = p;
	}
}

void print_L(LinkList L)  // 链表的打印 
{
	LinkList p;
	p = L->next;
	while(p)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
}
