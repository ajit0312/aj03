#include<stdio.h>
int main()
{
int n,m,i,c;
scanf("%d",&n);
scanf("%d",&m);
while(n<m)
{
c=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
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
