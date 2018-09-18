#include<iostream>>
using namespace std;
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node;

void insertatbegining(node **head,node **tail, int v)
{
    node *p = (node*)malloc(sizeof(node));
    p->prev=NULL;
    p->next=NULL;
    p->data=v;
    if(*head==NULL)
    {
        *head=p;
        *tail=p;
    }
    else{
        (*head)->prev=p;
        p->next=*head;
        *head=p;
    }

}
void insertatend(node **head,node **tail, int v)
{
    node *p = (node*)malloc(sizeof(node));
    p->prev=NULL;
    p->next=NULL;
    p->data=v;
    if(*head==NULL)
    {
        *head=p;
        *tail=p;
    }
    else{
        (*tail)->next=p;
        p->prev=*tail;
        *tail=p;
    }

}
void printlist(node *head)
{
    cout<<"Printing Linked List"<<endl;
    node *p = head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
void printreverse(node *tail)
{
    cout<<"Reverse Printing Linked List"<<endl;
    node *p = tail;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->prev;
    }
}
void deletefromend(node **tail)
{
    node *p = *tail;
    *tail=(*tail)->prev;
    (*tail)->next=NULL;
    free(p);
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    insertatbegining(&head,&tail,1);
    insertatbegining(&head,&tail,2);
    insertatbegining(&head,&tail,3);
    insertatbegining(&head,&tail,4);
    insertatbegining(&head,&tail,5);
    insertatend(&head,&tail,0);
    printlist(head);
    deletefromend(&tail);
    printlist(head);
    //printreverse(tail);
    return 0;
}
