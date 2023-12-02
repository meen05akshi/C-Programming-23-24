#include <stdio.h>
int main()
{
	char s[50];
	printf("Enter a string: ");
	scanf("%s",s);
	
	char c[50];
	int i=0,k=0;
	int flag;
	while(s[i]!='\0')
	{
		flag=0;
		for(int j=0;c[j]!='\0';j++)
			if (s[i]==c[j])
				flag=1;
		if (flag==0)
		{
			c[k]=s[i];
			k++;
		}
		i++;	
	}
	
	printf("First occurence of all elements: ");
	printf("%s",c);
	return 0;
}
