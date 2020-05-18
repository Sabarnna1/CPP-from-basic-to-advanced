#include<iostream>
using namespace std;
int main()
{ long int a[100],i,j,p,n,max=0;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ if(a[i]!=a[j])
{p=a[i]*a[j];
if(p>max)
max=p;
}
else 
continue;}
}
cout<<max;
fflush(stdin);
getchar();
return 0;
}
