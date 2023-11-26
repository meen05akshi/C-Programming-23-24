#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int i=0;
	
	while(s[i]!='\0')
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			s[i]='0';
		i++;
	}
	
	for(int i=0;i<strlen(s);i++)
		if(s[i]!='0')
			printf("%c",s[i]);
	return 0;
}
