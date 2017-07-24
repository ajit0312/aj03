#include<stdio.h>
int main()
{
int value, realvalue,rem,rev=0;
scanf("%d",&value);
realvalue=value;
while(value!=0)
{
rem=value%10;
rev=rev*10+rem;
value /=10;
}
if(rev==realvalue)
printf("given number is palindrome");
else
printf("given number is not palindrome");
return 0;
}
