#include<iostream>
using namespace std;

typedef struct node
{
  int data;
  struct node* link;
}node;

void insertatend(node **head,int value)
{
  node* newnode=(node*)malloc(sizeof(node));
  newnode->link==NULL;
  if(*head==NULL)
  {
    *head=newnode;
    newnode->data=value;
  }
  else
  {
    node* ptr=*head;
    while(ptr->link!=NULL)
    {
     ptr=ptr->link;
    }
    ptr->link=newnode;
    newnode->data=value;
  }
}
void showlist(node* head)
{
    node *ptr;
    ptr = head;
  while(ptr!=NULL)
  {
    cout<<ptr->data<<endl;
    ptr=ptr->link;
  }
}


int main()
{
    node* head=NULL;
    insertatend(&head,1);
    insertatend(&head,2);
    insertatend(&head,3);
    showlist(head);
    return 0;
}
