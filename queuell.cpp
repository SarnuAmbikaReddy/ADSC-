#include<iostream>
#include<stdlib.h>
using namespace std;
class QULL
{
struct queue
{
int data;
struct queue *next;
}
*front,*rear;
public:
typedef struct queue node;
void insert();
int del();
void display();
QULL();
};
QULL::QULL()
{
front=NULL;
rear=NULL;
}
int main()
{
QULL obj;
int ch,k;
while(1)
{
cout<<"\n\t\tMAIN MENU\n";
cout<<"\n\t1.insert\n\t2.delete\n\t3.display\n\t4.exit\n";
cout<<"enter ur choice";
cin>>ch;
switch(ch)
{
case 1: obj.insert();
	break;
case 2: k=obj.del();
	cout<<"deleted element :"<<k;
case 3: obj.display();
	break;
case 4: exit(0);
default:cout<<"enter correct option";
break;
}
}
}
void QULL::insert()
{
node *temp;
temp=new node;
cout<<"enter inserted element";
cin>>temp->data;
if(front==NULL)
{
temp->next=front;
front=rear=temp;
rear=temp;
}
}
int QULL::del()
{
int k;
node *p;
if(front!=NULL)
{
k=front->data;
p=front;
front=front->next;
free(p);
return(k);
}
}
void QULL::display()
{
node *p;
p=front;
cout<<"\nelements in list are\n";
if(front!=NULL)
while(p!=NULL)
{
cout<<"->"<<p->data;
p=p->next;
}
else
cout<<"queue is empty";
}
