#include<iostream>
#include<vector>
using namespace std;
int max(int n,vector<int>& a)
{int i,max=0;
for(i=0;i<n;i++)
{ if(a[max]<a[i])
max=i;}
return a[max];
}
int main()
{int i,n,j,max1;
cin>>n;
vector<int> a(n);
for(i=0 ;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)
{ max1=-1;
for(j=i+1;j<n;j++)
{if(a[j]>a[i])
{max1=a[j];
break;}}
cout<<"\n"<<a[i]<<" --> "<<max1;
}
fflush(stdin);
getchar();
return 0;}
