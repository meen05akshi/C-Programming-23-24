#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	char s1[20];
	printf("Enter string 1: ");
	scanf("%s",s);
	
	printf("Enter string 2: ");
	scanf("%s",s1);
	
	if (strcmp(s,s1))
		printf("NOT equal");
	else
		printf("EQUAL");
	
	return 0;
}
