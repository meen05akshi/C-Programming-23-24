#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n The even numbers from 1 to %d are: \n",n);
	for (int i=2;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	return 0;
}
