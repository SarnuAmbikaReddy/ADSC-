#include<iostream>
using namespace std;
int main()
{
int a[10],n,key,low=0,high,mid,pos,i;
cout<<"enter n : ";
cin>>n;
high=n-1;
cout<<"enter elements : ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"key : ";
cin>>key;
while(low<=high)
{
mid=(low+high)/2;
if(key>a[mid])
{
low=mid+1;
}
else if(key<a[mid])
{
high=mid-1;
}
else
{
pos=mid;
break;
}
}
cout<<"position  is : "<<pos<<"\n";
}
