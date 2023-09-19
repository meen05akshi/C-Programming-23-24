#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n Odd numbers from 1 to %d is: \n",n);
	for (int i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	return 0;
}
