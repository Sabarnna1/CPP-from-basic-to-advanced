#include<iostream>
#include<math.h>
using namespace std;
int main()
{int n,p,n1,s=0;
cout<<"Enter the number";
cin>>n;
n1=n;
while(n>0)
{p=n%10;
s+=pow(p,3);
n=n/10;
}
if(s==n1)
cout<<"The number  is armstrong";
else 
cout<<"This number is not armstrong";
fflush stdin;
getchar();
return 0;
}
