#include<iostream>
#include<math.h>
using namespace std;
int main()
{ long long int x,y,m,n,flag=0,c=0;
cin>>x>>y>>m;
while(n<m)
{ if(x+y==m)
{c++;
n=x+y;
}
if(x+y<m)
{if(x<y)
{x=x+y;
n=x+y;
c++;
}
else
{y=x+y;
n=x+y;
c++;}
}
if(x+y>m)
{flag=1;
break;
n=x+y;
}
}
if(flag!=1)
cout<<"The number of moves before final solution aceived is"<<c;
else
cout<<"-1";
fflush(stdin);
getchar();
return 0;
}

