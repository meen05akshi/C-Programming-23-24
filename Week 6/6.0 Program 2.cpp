//WORKS

#include <stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	n++;
	char s[n];
	printf("Enter string: ");
	scanf("%s",s);
	
	char s1[n];
	
	printf("\nCopied string is: ");
	for(int i=0;i<n;i++)
		s1[i]=s[i];
	
	printf("%s",s1);
	return 0;

}
