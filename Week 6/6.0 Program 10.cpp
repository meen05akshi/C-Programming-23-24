#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[50],ch,temp;
	int n;
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("Enter a character: ");
	scanf("%c",&ch);
	printf("Enter position: ");
	scanf("%d",&n);
	
	int num=strlen(s)+1;
	
	for(int i=0;i<num;i++)
	{
		if (i==n)
		{
			temp=s[i];
			s[i]=ch;
			for(int j=num-1;j>i;j--)
			{
				s[j]=s[j-1];
				if (j==i+1)
					s[j]=temp;
			}
		}	
	}
	
	printf("Updated string: %s",s);
	return 0;
}
