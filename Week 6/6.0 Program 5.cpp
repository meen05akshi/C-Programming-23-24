#include <stdio.h>
int main()
{
	char temp;
	char s[]="Hello";
	for(int i=0;i<2;i++)
	{
		temp=s[i];
		s[i]=s[6-i-1];
		s[6-i-1]=temp;
	}
	
	printf("Reversed string is: %s",s);
	return 0;
}
