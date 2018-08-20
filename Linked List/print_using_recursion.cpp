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

void insertintermediate(node *head,int a)
{
    int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
    node*ptr=head;
    while(ptr->data!=a)
    {
        ptr=ptr->link;
    }
    node* newnode=(node*)malloc(sizeof(node));
    newnode->link=ptr->link;
    ptr->link=newnode;
    newnode->data=value;
}
void showlist(node* head)
{
    cout<<head->data<<endl;
    showlist(head->link);
}



int main()
{
    node* head=NULL;
    insertatend(&head,1);
    insertatend(&head,2);
    insertatend(&head,4);
    insertatend(&head,5);
    showlist(head);
    return 0;
}

