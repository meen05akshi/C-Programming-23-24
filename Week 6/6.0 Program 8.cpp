#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int i=0;
	printf("Enter a string: ");
	scanf("%s",s);
	
	int n=strlen(s);
	char str[n+1];

	while(i<n)
	{
		str[i]=s[n-i-1];
		i++;
	}
	str[i]='\0';
	printf("%s",str);
	printf("\n%s",s);
	
	int num=strncmp(str,s,n);
	
	if (!num)
		printf("\nString is PALINDROME");
	else
		printf("\nNOT PALINDROME");
		
	return 0;
	
}
