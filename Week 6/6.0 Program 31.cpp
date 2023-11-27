//NOT

#include <stdio.h>
#include <string.h>
int main()
{
	char s[50],rev[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	char flag='y';
	
	for(int i=strlen(s)-1;i>=0;i--)
	{
		rev[strlen(s)-1-i]=s[i];
		if (s[i]>=48 && s[i]<=57)
		{
			flag='n';
			break;
		}
	}
	rev[strlen(s)]='\0';
	
	if (flag=='n')
		printf("Invalid string");
	else
		printf("%s",rev);
	return 0;
}
