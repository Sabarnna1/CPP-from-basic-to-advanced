#include<iostream>
using namespace std;

int main()
{ long long int n,c=0,cp;
cin>>n;
cp=n;
while(n>0)
{int d=n%10;
if(d!=0)
{if(cp%d==0)
c++;}
n=n/10;
}
cout<<c;
fflush(stdin);
getchar();
return 0;
}
