#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		if (i<n/2)
		{	
			for (int s=0;s<n/2-i;s++)
				printf(" "); //1 space
			
			for (int j=0;j<=i;j++)
			{
				if (i%2==0)
					printf("*");
				else
					printf("-");
			}
		}
		else
		{
			for (int s=0;s<i-n/2;s++)
				printf(" "); // 1 space
			
			for (int j=0;j<n-i;j++)
			{
				if (i%2==0)
					printf("*");
				else
					printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}
