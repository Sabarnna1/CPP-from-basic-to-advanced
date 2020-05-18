#include<iostream>
using namespace std;
int main()
{ int n,m,i,max=1;
cout<<"Enter the values of n and m ";
cin>>n>>m;
for(i=1;i<=n;i++)
{if(m%i==0)
{
if(max<i)
max=i;
}
}
cout<<"The largest number divisible by m is "<<max;
fflush(stdin);
getchar();
return 0;
}
