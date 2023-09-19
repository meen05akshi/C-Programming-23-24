#include <stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
		fact*=i;
	printf("\nFactorial of %d is %d ",n,fact);
	return 0;
}
