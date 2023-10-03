#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	for (int i=0;i<n;i++)
	{
		for (int s=0;s<i;s++)
			printf("  "); //2 spaces
		
		for (int j=n;j>i;j--)
			printf("* "); //with space
		printf("\n");
	}
	return 0;
}
