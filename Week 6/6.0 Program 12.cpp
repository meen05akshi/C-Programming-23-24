#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	int n[20];
	printf("Enter a string: ");
	scanf("%s",s);
	
	int i=0,count=0;
	while(s[i]!='\0')
	{
		count=0;
		for(int j=0;j<strlen(s);j++)
		{
			if (s[i]==s[j])
				count++;
		}
		n[i]=count;
		i++;
	}
	
	int max=0,num1=0,num2=0,min=s[i];
	
	for(int i=0;s[i]!='\0';i++)
	{
		if (n[i]>max)
		{
			max=n[i];
			num1=i;
		}
		if(n[i]<min)
		{
			min=n[i];
			num2=i;
		}
	}
	
	printf("Most repeated character is: %c",s[max]);
	printf("\nLeast repeated character is: %c",s[min]);
	
	return 0;

	
}
