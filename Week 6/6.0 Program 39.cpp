#include <stdio.h>
int main()
{
	char s[50];
	printf("Enter a string: ");
	scanf("%s",s);
	
	int i=0,count=0;
	int flag=0;
	while(s[i]!='\0')
	{
		count=0;
		for(int j=0;s[j]!='\0';j++)
		{
			if(s[i]==s[j])
				count++;
		}
		if (count!=(int(s[i])-96))
		{
			flag=1;
			break;
		}
		i++;
	}
	if (flag==0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
