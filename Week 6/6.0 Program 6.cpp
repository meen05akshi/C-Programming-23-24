//WORKS 

#include <stdio.h>
int main()
{
	char s[]="world";
	char ch='r';
	for(int i=0;i<6;i++)
	{
		if (s[i]==ch)
		{
			printf("First occurence of %c is at position %d.",ch,i+1);
			break;
		}
	}
	return 0;
}
