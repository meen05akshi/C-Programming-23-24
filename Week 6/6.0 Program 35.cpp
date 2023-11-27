#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	char ch1=s[0],ch2=s[1],flag='y';
	for(int i=0;s[i]!='\0';i++)
	{
		if (i%2==0)
		{
			if (ch1!=s[i])
			{
				flag='n';
				break;
			}
		}
		else
		{
			if(ch2!=s[i])
			{
				flag='n';
				break;
			}
		}
	}
	
	if (flag=='n')
		printf("NO");
	else
		printf("YES");
	
	return 0;
}
