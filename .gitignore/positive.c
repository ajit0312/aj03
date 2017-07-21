include<stdio.h>

int main()
{
int n;

printf("enter the n value");
scanf("%d",&n);
if(n<=0)
{
    if(n==0)
    {
printf("the value is equal to zero");

}
else
{

printf("the value is negative");
}
}
if(n>0)
{
printf("the value is positive");
}

return 0;
}

