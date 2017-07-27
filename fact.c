#include<stdio.h>
int main()
{
int i,n,fact=1;
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
fact*=i;
}
printf("%d=%d",n,fact);
}
else
printf("error");
return 0;
}

