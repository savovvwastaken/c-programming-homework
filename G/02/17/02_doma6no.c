#include <stdio.h>
int main()
{
float l,a,g;
scanf("%f", &l);
scanf("%f", &a);
scanf("%f", &g);
if(l>a && l>g)
printf("\n%1.f", l); 
if(a>l && a>g)
printf("\n%1.f", a);
if(g>a && g>l)
printf("\n%1.f", g);
return 0;
}

