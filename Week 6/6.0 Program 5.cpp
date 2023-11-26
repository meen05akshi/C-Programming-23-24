// WORKS

#include <stdio.h>
int main()
{
	char temp;
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	char s[n];
	printf("Enter string: ");
	scanf("%s",s);
	
	for(int i=0;i<n/2;i++)
	{
		temp=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=temp;
	}
	
	printf("Reversed string is: %s",s);
	return 0;
}
