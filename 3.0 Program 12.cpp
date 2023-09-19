#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter value of n: ");
	scanf("%d ",&n);
	
	while (n>0)
	{
		i=n%10;
		sum+=i;
		n=n/10;
	}
	
	printf("\nSum of all the digits of this number is: %d",sum);
	return 0;
}
