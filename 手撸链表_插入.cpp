#include "手撸链表_生成与输出.h"

void insert_L(LinkList L, int x, int loc)
{
	int i = 0;
	LinkList p, q;
	p = L;
	q = (LinkList) malloc (sizeof(LNode));
	q->data = x;
	if(p == NULL || i > loc - 1)
	{
		printf("There is a bug!\n");
	}
	while(p && i < loc - 1)
	{
		p = p->next;
		i++;
	}
	q->next = p->next;
	p->next = q;
	L = p;
}

int main()
{
	LinkList L;
	int n;
	int x, loc;
	printf("请输入原始链表元素的数目：\n");
	scanf("%d", &n);
	create_L(L, n);
	printf("链表创建完成！\n");
	print_L(L);
	printf("\n");
	printf("请输入插入的元素值和位置（用空格隔开）:\n");
	getchar();
	scanf("%d %d", &x, &loc);
	insert_L(L, x, loc);
	print_L(L);
	printf("\n");
	system("pause");
	return OK;
}
