#include<stdio.h>
int main()
{
int base,power,result=1;
scanf("%d",&base);
scanf("%d",&power);
  if(power==0)
  {
    result=1;
    printf("%d",result);
  }
  if(power>0)
  {
while(power!=0)
{
result *=base;
--power;
}
printf("%d",result);
  }
return 0;
}
