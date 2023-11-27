#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=i+1;s[j]!='\0';j++)
		{
			if (s[i]==s[j])
				s[i]='0';
		}
	}
	
	for(int i=0;s[i]!='\0';i++)
	{
		//if(s[i]!='0')
		printf("%s",s[i]);
	}
	return 0;
}
