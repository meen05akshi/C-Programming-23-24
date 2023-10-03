#include <stdio.h>
int main()
{
	int n,k=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<2*n;i++)
	{
		if (i<n)
		{
			for (int j=0;j<=i;j++)
			{
				printf("%d",k); //no space
				if (j!=i)
					printf("*");
			}
			k++;
		}
		else
		{
			for (int j=0;j<2*n-i;j++)
			{
				printf("%d",k-1);
				if (j!=2*n-i-1)
					printf("*");
			}
			k--;
		}
		printf("\n");
	}
	return 0;
}
