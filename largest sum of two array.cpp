#include<iostream>
using namespace std;
int main()
{int a[100],a1[100],max=-9999,max1=-9999,k,l,i,j;
cout<<"Enter the values of k and l ";
cin>>k>>l;
cout<<"Enter the values of the first array ";
for(i=0;i<k;i++)
cin>>a[i];
cout<<"Enter the values of the second array ";
for(i=0;i<l;i++)
cin>>a1[i];
for(i=0,j=0;i<k,j<l;i++,j++)
{if(max<a[i])
max=a[i];
if(max=a1[j])
max1=a1[j];}
cout<<"The max sum of the element of the two array is "<<max+max1;
fflush(stdin);
getchar();
return 0;
}
