#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	
	int i=0;
	char temp;
	
	for(int i=0;s[i]!='\0';i++)
	{
		for(int j=i;s[j+1]!='\0';j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	
	printf("Sorted string: %s",s);
	return 0;
}
