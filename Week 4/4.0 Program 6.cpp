#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=n;i>0;i--)
	{
		for (int s=0;s<n-i;s++)
			printf("  "); //2 Spaces
		
		for (int j=2*i-1;j>0;j--)
			printf("* "); //with space
		printf("\n");
	}
	return 0;
}
