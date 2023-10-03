#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};

struct node *head,*tail=NULL;
void insert(int data)
{
struct node *newnode=(struct node*)malloc(sizeof(newnode));
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else
{
tail->next=newnode;
tail=tail->next;
}
return;
}
void dispaly()
{
struct node *current=head;
if(head==NULL)
{
printf("lists is empty \n");
return;
}
printf("nodes of singly linked list: \n");
while(current!=NULL)
{
printf("%d\n",current->data);
current=current->next;
}
}
int main()
{
insert(10);
insert(20);
insert(30);
insert(40);
dispaly();
return 0;
}
