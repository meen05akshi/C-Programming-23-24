#include <stdio.h>
int main()
{
	char s[]="Hello";
	char s2[]="Hello";
	char c='y';
	
	if (strlen(s)!=strlen(s2))
		printf("Strings are UNEQUAL");
	
	else
	{
		for(int i=0;i<6;i++)
		{
			if(s[i]!=s2[i])
			{
				printf("Strings are UNEQUAL.");
				c='n';
				break;
			}
		}
		if (c=='y')
			printf("Strings are EQUAL");
	}
	return 0;		
}
