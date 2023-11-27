#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]==' ')
		{
			for(int j=i;j<len;j++)
				s[j]=s[j+1];
			len--;
		}
	}
	
	printf("String without spaces is: %s",s);
	return 0;
}
