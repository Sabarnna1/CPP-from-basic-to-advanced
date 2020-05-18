#include<iostream>
using namespace std;
int main()
{int arr[200],i,pos,x,n,temp;
cout<<"\nEnter the length of the array ";
cin>>n;
cout<<"\nEnter the number you want to enter and at what position ";
cin>>x>>pos;
cout<<"\nEnter the numbers into the array ";
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<=n+1;i++)
{if(i==pos)
{temp=arr[i];
arr[i]=x;
arr[i+1]=temp;}
}
cout<<"\nThe new array is ";
for(i=0;i<n;i++)
    cout<<arr[i];
getchar();
return 0;

}
