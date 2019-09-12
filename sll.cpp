//Single Linked List
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class sll
{
  struct list
  {
    int data;
    struct list *next;
  }*head;
  public:
    typedef struct list node;
    sll();
    void create();
    void insert();
    void display();
    int count();
    int deletepos();
    void insertatbeg();
    void insertatmid();
    void insertatend();
    void search();
};
sll::sll()
{
  head=NULL;
}
int main()
{
  int ch,k,c;
  sll obj;
  do
  {
    cout<<"\n\tMAIN MENU\n";
    cout<<"\t\t1.Create\n\t\t2.Display\n\t\t3.Insert\n\t\t4.Deletepos\n\t\t5.Count\n\t\t6.Search\n\t\t7.Exit\n";
    cout<<"\n\tEnter your choice:";
    cin>>ch;
    switch(ch)
    {
      case 1:obj.create();
             break;
      case 2:obj.display();
             break;
      case 3:obj.insert();
             break;
      case 4:k=obj.deletepos();
             cout<<"Deleted element from the list is:"<<k;
             break;
      case 5:c=obj.count();
             cout<<"No.of elements in the list are:"<<c;
             break;
      case 6:obj.search();
             break;
      case 7:exit(0);
    }
  }while(ch>0&&ch<8);
}
void sll :: create()
{
   node *temp,*p;
   temp=new node;
   cout<<"Enter the element:";
   cin>>temp->data;
   if(head==NULL)
   {
     temp->next=head;
     head=temp;
   }
   else
   {
     p=head;
     while(p->next!=NULL)
       p=p->next;
     temp->next=NULL;
     p->next=temp;
   }
}
void sll :: display()
{
   node *q;
   q=head;
   cout<<"Elements in the list are:\n";
   while(q!=NULL)
   {
     cout<<"->"<<q->data;
     q=q->next;
   }
}
int sll :: count()
{
   node *p;
   int c=0;
   p=head;
   while(p!=NULL)
   {
     p=p->next;
     c++;
   }
   return c;
}
void sll :: search()
{
  int f=0,k;
  node *p;
  p=head;
  cout<<"Enter the element you want to find:";
  cin>>k;
  while(p!=NULL)
  {
    if(p->data==k)
    {
       f=1;
       cout<<"Element found";
    }
    p=p->next;
  }
  if(f==0)
  {
    cout<<"Element not found";
  }
}
void sll :: insert()
{
  int ch;
  do
  {
    cout<<"\n\t\t1.Insertatbeg\n\t\t\t2.Insertatmid\n\t\t\t3.Insertatend\n\t\t\t4.Display\n\t\t\t5.Exit";
    cout<<"Enter your choice:\n";
    cin>>ch;
    switch(ch)
    {
      case 1:insertatbeg();
             break;
      case 2:insertatmid();
             break;
      case 3:insertatend();
             break;
      case 4:display();
             break;
      default:
              break;
    }
  }while(ch>0&&ch<5);
}
void sll :: insertatbeg()
{
  node *temp;
  temp=new node;
  cout<<"Enter the inserted element:";
  cin>>temp->data;
  temp->next=head;
  head=temp;
}
void sll :: insertatmid()
{
  node *temp,*p;
  int key;
  temp=new node;
  cout<<"Enter the element:";
  cin>>temp->data;
  cout<<"Enter the key element:";
  cin>>key;
  p=head;
  while(p!=NULL)
  {
     if(p->data==key)
     {
       temp->next=p->next;
       p->next=temp;
     }
     p=p->next;
  }
}
void sll :: insertatend()
{
   node *temp,*p;
   temp=new node;
   cout<<"Enter element:\n";
   cin>>temp->data;
   if(head==NULL)
   {
     temp->next=head;
     head=temp;
   }
   else 
   {
     p=head;
     while(p->next!=NULL)
       p=p->next;
     temp->next=NULL;
     p->next=temp;
   }
}
int sll :: deletepos()
{
   node *p;
   int pos,i,k;
   cout<<"Enter the position for deletion:\n";
   cin>>pos;
   if(head!=NULL)
   {
      if(pos==1)
      {
        k=head->data;
        head=head->next;
        return k;
      }
      else 
      {
        i=2;
        p=head;
        while((p!=NULL)&&(i<pos))
        {
          p=p->next;
          i++;
        }
        if(p!=NULL)
        {
          k=p->next->data;
          p->next=p->next->next;
          return k;
        }
      }
   }
   else
     cout<<"\nList is empty";
}
