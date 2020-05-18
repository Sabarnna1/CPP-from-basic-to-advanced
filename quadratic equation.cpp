#include<iostream>
#include<math.h>
using namespace std;
int main()
{double a,b,c;
cout<<"Enter the coefficient of the equation ax^2+bx+c ";
cin>>a>>b>>c;
cout<<"\nThe first root of the equation is "<<(-b+sqrt(b*b-4*a*c))/2*a;
cout<<"\nThe second root of the equation is "<<(-b-sqrt(b*b-4*a*c))/2*a;
fflush(stdin);
getchar();
return 0;}
