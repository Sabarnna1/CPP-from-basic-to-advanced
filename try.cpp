#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fact(float n)
{ int i,p=1;
for(i=1;i<=n;i++)
p*=i;
return p;}

int main() 
{ float p;
int i;
for(i=3;i<=6;i++)
{
    p+=fact(6)/(fact(6-i)*fact(i))*pow(1.09,i)/pow(2.09,6);
}
printf("%.3f",p);
    return 0;
}

