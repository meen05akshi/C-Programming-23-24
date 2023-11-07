#include <stdio.h>
int main()
{
	char s[]="Hello world";
	int k=0,count=0;
	while(s!="")
	{
		if (s[k]!='\0')
			count++;
		else
			break;
		k++;
	}
	
	printf("Length of string is %d",count);
	return 0;
}
