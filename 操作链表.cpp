#include<stdio.h>
#include<stdlib.h>

//建立单向链表
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int x;
	struct node *h,*s,*r;  // 定义头指针、 开辟新节点指针、 连接新结点指针 
	h=(struct node*)malloc(sizeof(struct node)); //生成头结点 
	r=h;
	scanf("%d",&x);
	while(x!=-1)
	{
		s=(struct node*)malloc(sizeof(struct node));// 开辟新节点
		s->data=x;
		r->next=s;
		r=s;
		scanf("%d",&x);
	}
	r->next='\0';
 } 
 
 
 // 遍历链表
 
 void print_slist(struct node *h)
 {
 	struct node *p; // 定义工作指针变量
	p=h->next; // p 指向头结点后的第一个节点
	if(p=='\0')  // 链表为空 
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
 
 
 // 删除结点  （删除数据是x的结点） 
 void delete_node(struct node *h,int x)
 {
 	struct node*p,*q;
 	q=h;p=h->next;   // 工作指针初始化， q 在前，p 在后
	if(p!='\0')  // 链表非空 
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


// 插入结点   （将 y 插入 x 前   若链表中无 x ，则插入在表尾） 
void insert_node(struct node*h,int x,int y)
{
	struct node *s,*p,*q;  // 开辟新结点、查找插入点、连接新结点指针 
	s=(struct node*)malloc(sizeof(struct node));
	s->data=y;
	q=h;p=h->next;
	while((p!='\0')&&(p->data!=x)) // 表非空 且 未到表尾， 查找 x 的位置
	{
		q=p;p=p->next;
	} 
	q->next=s;s->next=p; 
}
 
 
 
 
 
 
 
