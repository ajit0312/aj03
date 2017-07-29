#include<stdio.h>
int main()
{
int i,a,o=0,t=1,nex;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
printf("%d\n",o);
nex=o+t;
o=t;
t=nex;
}
return 0;
}
