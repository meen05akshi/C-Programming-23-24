#include <stdio.h>
int main()
{
	char s[]="Hello";
	printf("Vowels present in the string are: \n");
	for(int i=0;i<6;i++)
	{
		if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
			printf("%c ",s[i]);
			
	}
	
	return 0;	
}
