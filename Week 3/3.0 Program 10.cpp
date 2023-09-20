#include <stdio.h>
int main()
{
	int n,rev=0,i;
	printf("Enter value of n: ");
	scanf("%d",&n);
	while (n>0);
	{
		i=n%10;
		rev=rev*10 + i;
		n=n/10;
	}
	printf("\n\nOriginal number is %d",n);
	printf("\nReversed number is: %d",rev);
	return 0;
}
