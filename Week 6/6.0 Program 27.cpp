#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	
	strlwr(s);
	int i=0,flag=0;
	for(char c='a';c<=122;c++)
	{
		flag=0;
		for(int i=0;s[i]!='\0';i++)
		{
			if (c==s[i])
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
			break;
	}
	
	if (flag==0)
		printf("Not a panagram");
	else
		printf("Panagram");
	return 0;
}
