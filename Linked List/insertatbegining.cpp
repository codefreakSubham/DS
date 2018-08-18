#include<iostream>
#include<memory.h>

using namespace std;

typedef struct node
{
int info;
struct node *next;
}node;

  node* head = NULL;

void insertatbeginning(int item)
{
	node *ptr;
	ptr=(node*) malloc(sizeof(node));
	ptr->info=item;
	if(head==NULL)
	{ ptr->next=NULL;
	  head=ptr;}
	else
	 {ptr->next=head;
      head=ptr;}
}

void showlist()
{
  node *ptr;
  ptr = head;
  while(ptr->next!=NULL)
  {
    cout<<ptr->info<<endl;
    ptr=ptr->next;
  }

}

int main()
{
  showlist();
  insertatbeginning(2);
  insertatbeginning(3);
  showlist();
return 0;
}

