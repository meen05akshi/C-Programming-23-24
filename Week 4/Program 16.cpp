#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<=i;j++)
			printf("%d ",j+1); //with space
		printf("\n");
	}
	return 0;
}
