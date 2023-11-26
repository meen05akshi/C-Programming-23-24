#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int i=0,count=0;
	
	while(s[i]!='\0')
	{
		if (s[i]==' ')
			count++;
		i++;
	}
	
	printf("Number of words: %d",count+1);
	return 0;
}
