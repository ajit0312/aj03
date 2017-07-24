#include<stdio.h>
int main()
{
int base,power,result=1;
scanf("%d",&base);
scanf("%d",&power);
whiile(power!=0)
{
result *=base;
--power;
}
printf("%d",result);
return 0;
}
