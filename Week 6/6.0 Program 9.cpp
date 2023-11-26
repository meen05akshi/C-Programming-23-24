#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int i=0;
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	
	printf("Vowels present are: ");
	while(s[i]!='\0')
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		{
			printf("%c ",s[i]);
		}
		i++;
	}
	
	return 0;
}

