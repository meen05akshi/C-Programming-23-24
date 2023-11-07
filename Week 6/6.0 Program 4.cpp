#include <stdio.h>
int main()
{
	int n;
	char s[6]="HELLO";
	for(int i=0;i<6;i++)
	{
		n=s[i]+32;
		s[i]=n;
	}
	
	printf("%s",s);
	return 0;
}
