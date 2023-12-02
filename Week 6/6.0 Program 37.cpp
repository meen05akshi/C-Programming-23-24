#include <stdio.h>
int main()
{
	char s[20];
	printf("Enter an expression: ");
	scanf("%[^\n]s",s);
	
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==')' || s[i]=='(')
			printf(" ");
		else
			printf("%c",s[i]);
		i++;
	}
	return 0;
}
