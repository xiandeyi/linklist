#include "��ߣ����_���������.h"

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
	printf("������ԭʼ����Ԫ�ص���Ŀ��\n");
	scanf("%d", &n);
	create_L(L, n);
	printf("��������ɣ�\n");
	print_L(L);
	printf("\n");
	printf("����������Ԫ��ֵ��λ�ã��ÿո������:\n");
	getchar();
	scanf("%d %d", &x, &loc);
	insert_L(L, x, loc);
	print_L(L);
	printf("\n");
	system("pause");
	return OK;
}
