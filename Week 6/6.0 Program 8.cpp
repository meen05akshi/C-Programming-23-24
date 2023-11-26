//NOT 

#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	n++;
	char s[n];
	
	printf("Enter string: ");
	scanf("%s",s);
	
	char rev[n];
	
	for(int i=0;i<n;i++)
	{
		rev[i]=s[n-i-1];
	}
	printf("1. %s",rev);
	printf("2. %s",s);
	if(strcmp(s,rev)==0)
		printf("\nPALINDROME");
	else
		printf("\nNOT PALINDROME");
		
	return 0;
}
