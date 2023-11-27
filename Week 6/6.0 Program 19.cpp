#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	char ch,flag='n';
	int i=0;
	
	while(s[i]!='\0')
	{
		if (s[i]=='(')
			ch=')';
		else if (s[i]=='{')
			ch='}';
		else if (s[i]=='[')
			ch=']';
		else if(s[i]=='<')
			ch='>';
		
		i++;
	}
	
	for(int j=i-1;s[j]!='\0';j++)
	{
		if(s[j]==ch)
			flag='y';
	}
	
	if(flag=='y')
		printf("String is valid");
	else
		printf("String is NOT valid");

	return 0;
}
