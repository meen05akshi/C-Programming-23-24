#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int i=0;
	while (s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
		{
			printf("First capital letter is: %c",s[i]);
			break;
		}
		i++;
	}

	return 0;
}
