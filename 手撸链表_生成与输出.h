#include "myinclude.h"
#include <time.h>
#include <math.h>

typedef struct LNode
{
	int data;
	LNode *next;
}LNode, *LinkList;

void create_L(LinkList &L, int n)  // ����Ĵ���
{
	LinkList p;
	int i;
	L = (LinkList) malloc (sizeof(LNode));
	L->data = n;
	L->next = NULL;
	for(i = 0; i < n; i++)
	{
		p = (LinkList) malloc (sizeof(LNode));
		srand(time(0) * i - int(pow(3, i)));  // ����srand()����������������� 
		p->data = rand();  // �������Ԫ��ֵΪ�����ֵ 
		p->next = L->next;
		L->next = p;
	}
}

void print_L(LinkList L)  // ����Ĵ�ӡ 
{
	LinkList p;
	p = L->next;
	while(p)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
}
