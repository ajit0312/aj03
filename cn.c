#include<stdio.h>
int main()
{
long long int value;
long long int c=0;
scanf("%lld",&value);
while(value!=0)
{
value /=10;
c++;
}
printf("%lld",c);
}
