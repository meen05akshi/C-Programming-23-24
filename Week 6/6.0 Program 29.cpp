#include <stdio.h>
int main()
{
	char s1[50];
	char s2[50];
	printf("Enter a string 1: ");
	scanf("%s",s1);
	printf("Enter string 2: ");
	scanf("%s",s2);
	
	int i=0,flag=0;
	while(s1[i]!='\0')
	{
		for(int j=0;s2[j]!='\0';j++)
		{
			if (s2[j]==s1[i])
			{
				s2[j]='0';
				flag=1;
			}
		}
		if (flag==0)
			break;
		i++;
	}
	if (flag==0)
		printf("Not Anagram");
	else
		printf("Anagram");
	return 0;
	
}
