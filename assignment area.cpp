#include<stdio.h>
#include<math.h>
float dist(float x,float y)
{ float a;
a=pow((x*x+y*y),2);
    return a;
}
int main()
{ float x1,y1,x2,y2,x3,y3,x,y,a=0.00,s,s1,s2,s3,a1=0.00;
printf("Enter the three coordinate of triangle in x,y form ");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
s=(dist(x1,y1)+dist(x2,y2)+dist(x3,y3))/2;
a=sqrt(s*(s-dist(x1,y1))*(s-dist(x2,y2))*(s-dist(x3,y3)));
printf("The area of the triangle is %f",a);
printf("\nEnter the point to check whether it is inside the triangle ");
scanf("%f%f",&x,&y);
s1=(dist(x,y)+dist(x2,y2)+dist(x3,y3))/2;
s2=(dist(x1,y1)+dist(x,y)+dist(x3,y3))/2;
s3=(dist(x1,y1)+dist(x2,y2)+dist(x,y))/2;
a1=sqrt(s1*(s1-dist(x,y))*(s1-dist(x2,y2))*(s1-dist(x3,y3)))+sqrt(s2*(s2-dist(x1,y1))*(s2-dist(x,y))*(s2-dist(x3,y3)))
+sqrt(s3*(s3-dist(x1,y1))*(s3-dist(x2,y2))*(s3-dist(x,y)));
if(a==a1)
    printf("The point is inside the triangle ");
else
    printf("The point is not inside triangle");    
getchar();
return 0;
}
