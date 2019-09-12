//Stack using Arrays
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define MAX 5
int top=-1;
int a[5];
class SUA
{
  public:void push();
         void pop();
         void display();
};
int main()
{
  SUA obj;
  int choice;
  while(1)
  {
    cout<<"\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n";
    cout<<"Enter your choice:\n";
    cin>>choice;
    switch(choice)
    {
      case 1:obj.push();
             break;
      case 2:obj.pop();
             break;
      case 3:obj.display();
             break;
      case 4:exit(1);
      default:cout<<"Invalid choice";
              break;
    }
  }
}
void SUA :: push()
{
  int pushed_item;
  if(top==(MAX-1))
  {
     cout<<"Stack overflow";
  }
  else 
  {
    cout<<"Enter the item to be pushed:";
    cin>>pushed_item;
    top=top+1;
    a[top]=pushed_item;
  }
}
void SUA :: display()
{
  int i;
  if(top==-1)
    cout<<"Stack is empty\n";
  else
  {
    cout<<"Stack elements are:\n";
    for(i=top;i>=0;i--)
      cout<<a[i]<<"\n";
  }
}
void SUA :: pop()
{
  if(top==-1)
    cout<<"Stack underflow";
  else
  {
     cout<<"Popped element is: \n"<<a[top];
     top=top-1;
  }
} 
