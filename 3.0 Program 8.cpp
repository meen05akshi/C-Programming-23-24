#include <stdio.h>
int main()
{
	int n,count=0;
	printf("Enter value of n: ");
	scanf("%d ",&n);
	while (n>0)
	{
		n=n/10;
		count++;
	}
	printf("\n Length of %d is %d ",n,count);
	return 0;
}
