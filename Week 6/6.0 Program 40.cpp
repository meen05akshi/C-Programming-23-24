#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter string 1: ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter string 2: ");
	scanf("%[^\n]s",s2);
	
	int len=strlen(s1);
	for(int i=0;s1[i]!='\0';i++)
	{
		for(int j=0;s2[j]!='\0';j++)
		{
			if (s1[i]==s2[j])
			{
				for(int j=i;j<len;j++)
					s1[j]=s1[j+1];
				len--;
			}
		}
	}	
	printf("%s",s1);
	
	return 0;
}
