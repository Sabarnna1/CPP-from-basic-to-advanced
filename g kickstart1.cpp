#include<iostream>
#include<algorithm>
using namespace std;
int main()
{int t,n,b,a[100000];
cin>>t;
while(t-->0)
{cin>>n;
int s=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>b;
    std::sort(a,a+n);
    int c=0,c1=0;
    while(s<=b)
    {s+=a[c++];}
    cout<<c<<"\n";}
return 0;
}
