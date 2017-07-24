#include<stdio.h>
int main()
{
int i,n,c=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c=1;
break;
}
}
if(c==0)
printf("the number is prime");
else
printf("the number is not prime");
return 0;
}
