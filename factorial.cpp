#include<iostream>
using namespace std;
int main()
{ int n ,i,p=1;
cout<<"Enter the value of n";
cin>>n;
for(i=1;i<=n;i++)
p*=i;
cout<<" The factorial value is"<<p;
fflush(stdin);
getchar();
return 0;
}
