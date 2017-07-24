#include<stdio.h>
int main()
{
int n,i,m;
scanf("%d",&n);
scanf("%d",&m);
while(n<=m)
{
for(i=n;i<=m;i++)
if(n%2==1)
{
break;
}
if(n%2==0)
printf("\n%d",n);
++n;
}
return 0;
}
