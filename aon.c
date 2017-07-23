#include<stdio.h>
int main()
{
	char w;
	scanf("%c",&w);
	if(w>='a'&& w<='z')
	{
		printf("the character is alphabates");
		
	}else if(w>='A'&& w<='Z')
	{
		printf("the character is alphabates");
	}	
	else
	{
		printf("the character is not alphabates");
	}
	return 0;
}
