#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int i=0;
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	
	if(s[i]>=97 && s[i]<=122)
		s[i]=s[i]-32;
	while(s[i]!='\0')
	{
		if (s[i]==' ' && s[i+1]<=122 && s[i+1]>=97)
			s[i+1]=s[i+1] - 32;
		i++;
	}
	
	printf("String is %s",s);
	return 0;
}
