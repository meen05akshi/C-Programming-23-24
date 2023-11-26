//WORKS 

#include <stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	char s[n];
	printf("Enter string: ");
	scanf("%s",s);
	
	char *p[n];
	for(int i=0;i<n;i++)
	{
		p[i]=s+i;
	}
	
	for(int i=n-1;i>=0;i--)
	{
		printf("%c",*p[i]);
	}
	return 0;
}
