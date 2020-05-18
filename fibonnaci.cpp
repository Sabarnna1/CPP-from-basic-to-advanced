#include <iostream>
using namespace std;

int main()
{
	// your code goes here
int n,first=0,second=1,next,c;
cout<<"Enter the number of terms ";
cin>>n;
for(c=0;c<n;c++)
{if(c<=1)
next=c;
else
{next=first+second;
first=second;
second=next;
}
cout<<" "<<next;}
fflush(stdin);
getchar();
	return 0;
}
