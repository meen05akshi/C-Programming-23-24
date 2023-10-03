#include <stdio.h>
int main()
{
	int n,start;
	printf("Enter starting integer: ");
	scanf("%d",&start);
	printf("Enter number of rows: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<2*n;i++)
	{
		if (i<n)
		{
			for (int j=0;j<=i;j++)
				printf("%d ",start); //with 1 space
			start++;
		}
		else
		{
			for (int j=0;j<2*n-i;j++)
				printf("%d ",start-1); //with 1 space
			start--;
		}
		printf("\n");
	}
	return 0;
}
