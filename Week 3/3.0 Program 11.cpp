#include <stdio.h>
int main()
{
	int n,rev=0,i;
	printf("Enter value of n:");
	scanf("%d",&n);
	int num=n;
	while (num>0)
	{
		i=num%10;
		rev=rev*10 + i;
		num=num/10;
	}
	
	if (rev==n)
		printf("\n%d is a Palindrome ",n);
	else
		printf("\n%d is NOT a Palindrome ",n);
	
	return 0;
	
}
