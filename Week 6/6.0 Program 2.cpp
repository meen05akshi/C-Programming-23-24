#include <stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	n++;
	char s[n];
	for(int i=0;i<n;i++)
		scanf("%c",&s[i]);
	
	char s1[n];
	for(int i=0;i<n;i++)
		s1[i]=s[i];
	
	printf("\nCopied string is: ");
	for(int i=0;i<n;i++)
		printf("%c",s1[i]);
	return 0;

}
