#include<iostream>
using namespace std;
int main()
{ int n,c=0,t,i,l,arr[1000],a=0,b,flag=0;
//cout<<"Enter the starting and end point of car";
cin>>b;
//cout<<"Enter the length of car covered ";
cin>>l;
//cout<<"Enter the total number of petrol station ";
cin>>n;
//cout<<"Enter the distances of petrol station";
for(i=0;i<n;i++)
cin>>arr[i];
arr[n]=b;
t=a;
for(i=0;i<=n;i++)
{ if(arr[i]-t<=l&&arr[i+1]-t>l)
{c++;
t=arr[i];}
if(arr[i]-arr[i-1]>l)
{flag=1;
break;}}
if(flag==0)
cout<<c;
else
cout<<-1;
fflush(stdin);
getchar();
return 0;
}
