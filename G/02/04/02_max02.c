#include<stdio.h>
int main()
{
float a,max=0;
int i=0;
while(i<3)
{
printf("\n Input number");
scanf("%f",&a);
i++;
if(max<a){max=a;}
}
printf("\n%f",max);
}
