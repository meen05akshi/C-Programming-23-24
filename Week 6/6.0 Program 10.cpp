//NOT
#include <stdio.h>
int main()
{
	int n;
	char s[]="Hello";
	char ch,temp;
	printf("Enter new character: ");
	scanf("%c",&ch);
	printf("Enter position: ");
	scanf("%d",&n);
	s[n-1]=ch;
	for(int i=n-1;i<7;i++)
	{
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
	
	printf("%s",s);
	return 0;
	
	
}
