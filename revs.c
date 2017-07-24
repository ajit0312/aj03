#include<stdio.h>
#include<string.h>
int main()
{
char arr[100],rev[100];
int i,j,len;
gets(arr);
len=strlen(arr);
j=0;
for(i=len-1;i>=0;i--)
{
rev[j]=arr[i];
j++;
}
rev[j]='\0';
printf("%s",rev);
return 0;
}
