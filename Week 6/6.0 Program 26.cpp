#include <stdio.h>
int main()
{
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int flag=0;
	char ch;
	for(int i=0;s[i]!='\0';i++)
	{
		flag=0;
		for(int j=i+1;s[j]!='\0';j++)
		{
			if (s[i]==s[j])
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			ch=s[i];
			break;
		}
	}
	
	if (flag==0)
		printf("First non repeating character %c",ch);
	else
		printf("All elements repeat");
	return 0;
}
