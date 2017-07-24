#include<stdio.h>
int main()
{
int n,m,c,i;
scanf("%d",&n);
scanf("%d",&m);
while(n<=m)
{
c=0;
for(i=n;i<=m;i++)
{
if(n%2==0)
{
c=1;
break;
}
}
if(c==0)
printf("\n%d",n);
++n;
}
return 0;
}
