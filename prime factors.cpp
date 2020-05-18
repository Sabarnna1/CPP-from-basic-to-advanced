#include<iostream>
using namespace std;
int prime(int n)
{ int i,c=0;
for(i=2;i<=n;i++)
{if(n%i==0)
c++;}
if(c==1) 
return 0;
else
return 1;}
int main()
{ int n ,i;
cout<<"Enter the number ";
cin>>n;
cout<<"The prime factorization of number is ";
for(i=2;i<=n;i++)
{if(prime(i)==0)
{while(n%i==0)
{ cout<<i<<",";
n=n/i;
}}}
fflush(stdin);
getchar();
return 0;
}
