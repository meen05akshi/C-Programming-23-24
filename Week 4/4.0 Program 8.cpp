#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		for (int s=0;s<n-i-1;s++)
			printf(" "); //1 space
		
		for (int j=0;j<n;j++)
			printf("* "); //with space
		printf("\n");
	}
	return 0;
}
