#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{ char s[100];
int i,l;
printf("Enter the string ");
gets(s);
l=strlen(s);
for(i=0;i!=l;i++)
{if(s[i]=="p"&&s[i+1]=="i")
{strcpy(s[i],"3.1");
strcpy(s[i+1],"4");
}
}
printf("The new string is %s",s);
fflush(stdin);
getchar(); //strcmp(s[i],"p")==0 strcmp(s[i+1],"i")==0
return 0;
}
