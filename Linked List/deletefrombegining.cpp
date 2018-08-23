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
void deleteFromStart(node* head)
{
    if(head == NULL)
        {
            cout<<"List is already empty.";        }
    else
    {
        node* ptr=head;
        ptr=ptr->link;
        free(ptr);
    }
}

void showlist(node* head)
{
    node* ptr=head;
     while(ptr!=NULL)
     {
        cout<<ptr->data;
        ptr=ptr->link;
     }
}



int main()
{
    node* head=NULL;
    insertatend(&head,1);
    insertatend(&head,2);
    insertatend(&head,3);
    insertatend(&head,4);
    showlist(head);
    deleteFromStart(head);
    showlist(head);
    return 0;
}
