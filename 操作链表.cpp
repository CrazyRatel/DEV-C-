#include<stdio.h>
#include<stdlib.h>

//������������
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int x;
	struct node *h,*s,*r;  // ����ͷָ�롢 �����½ڵ�ָ�롢 �����½��ָ�� 
	h=(struct node*)malloc(sizeof(struct node)); //����ͷ��� 
	r=h;
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(struct node*)malloc(sizeof(struct node));// �����½ڵ�
		s->data=x;
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next='\0';
 } 
 
 
 // ��������
 
 void print_slist(struct node *h)
 {
 	struct node *p; // ���幤��ָ�����
	p=h->next; // p ָ��ͷ����ĵ�һ���ڵ�
	if(p=='\0')  // ����Ϊ�� 
		printf("Linklist is null!\n");
	else
	{
		printf("head");
		while(p!='\0')
		{
			printf("->%d",p->data);
			p=p->next;
		}
		printf("->end\n");
	} 
 }
 
 
 // ɾ�����  ��ɾ��������x�Ľ�㣩 
 void delete_node(struct node *h,int x)
 {
 	struct node*p,*q;
 	q=h;p=h->next;   // ����ָ���ʼ���� q ��ǰ��p �ں�
	if(p!='\0')  // ����ǿ� 
	{
		while((p!='\0')&(p->data!=x))
		{
			q=p;p=p->next;
		}
		if(p->data==x)
		{
			q->next=p->next;free(p);
		}
	}
} 


// ������   ���� y ���� x ǰ   ���������� x ��������ڱ�β�� 
void insert_node(struct node*h,int x,int y)
{
	struct node *s,*p,*q;  // �����½�㡢���Ҳ���㡢�����½��ָ�� 
	s=(struct node*)malloc(sizeof(struct node));
	s->data=y;
	q=h;p=h->next;
	while((p!='\0')&&(p->data!=x)) // ��ǿ� �� δ����β�� ���� x ��λ��
	{
		q=p;p=p->next;
	} 
	q->next=s;s->next=p; 
}
 
 
 
 
 
 
 
