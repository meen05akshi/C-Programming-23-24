#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter string : ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter string 2: ");
	scanf("%[^\n]s",s2);
	
	char flag='n';
	
	for(int i=0;s2[i]!='\0';i++)
	{
		flag='n';
		for(int j=0;s1[j]!='\0';j++)
		{
			if(s2[i]==s1[j])
			{
				flag='y';
				s1[j]='0';
			}
		}
		if (flag=='n')
			break;
	}
	
	if(flag=='n')
		printf("NOT Possible");
	else
		printf("Possible");
	
	return 0;
}
