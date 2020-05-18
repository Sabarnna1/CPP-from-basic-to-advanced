
#include <iostream>
using namespace std;
int main() 
{int n,a[100],m,q[100],s=0,i,j;
cout<<"Enter n";
 cin>>n;
  for(i=0;i<n;i++)
     cin>>a[i];
     cout<<"Enter m ";
     cin>>m;
  for(i=0;i<m;i++)
      cin>>q[i];
   for(i=0;i<n;i++)
   {s+=a[i];
       for(j=0;j<m;j++)
   {
    cout<<"Sum"<<s;
   if(q[j]<=s)
   {cout<<a[i];
   break;}
   }   
       
  s=0;   }
           return 0;
}

