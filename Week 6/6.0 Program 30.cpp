#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int count=0;
	if (strlen(s)==0)
		printf("-1");
	else
	{
		for(int i=strlen(s)-1;i>=0;i--)
		{
			if(s[i]==' ')
				break;
			count++;
		}
		
		printf("Length of last word is: %d",count);
	}
	
	return 0;
}
