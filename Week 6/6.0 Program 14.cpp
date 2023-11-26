#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int i=0,vowel=0,cons=0,space=0,digits=0;
	
	while(s[i]!='\0')
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			vowel++;
		
		else if (s[i]>=48 && s[i]<=57)
			digits++;
			
		else if (s[i]==' ')
			space++;

		else
			cons++;
		
		i++;
	}
	
	printf("\nNumber of consonants: %d",cons);
	printf("\nNumber of vowels: %d",vowel);
	printf("\nNumber of digits: %d",digits);
	printf("\nNumber of spaces: %d",space);
	return 0;
}
