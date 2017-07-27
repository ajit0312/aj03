#include<stdio.h>
int main()
{
int number,originalnumber,rem,result=0;
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{
rem=originalnumber%10;
result +=rem*rem*rem;
originalnumber/=10;
}
if(result==number)
printf("the number is amstrong");
else
printf("the number is not amstrong");
return 0;
}
