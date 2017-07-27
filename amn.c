#include<stdio.h>
#include<math.h>
int main()
{
int n,m,or1,or2,r,a=0,result=0,i;
scanf("%d %d",&n,&m);
for(i=n+1;i<m;i++)
{
or2=i;
or1=i;
while(or1!=0)
{
or1/=10;
a++;
}
while(or2!=0)
{
r=or2%10;
result+=pow(r,a);
or2/=10;
}
if(result==i)
{
printf("%d",i);
}
a=0;
result=0;
}
return 0;
}
