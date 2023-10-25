#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<2*n;i++)
	{
		if (i<n)
		{
			for (int j=0;j<i+1;j++)
				printf("* "); //with space
			
			for(int s=0;s<2*(n-i-1);s++)
				printf("  "); // 2 spaces
			
			for (int j=0;j<i+1;j++)
				printf("* "); //with space
			
		}
		
		else
		{
			for (int j=2*n;j>i;j--)
				printf("* "); //with space
			
			for(int s=0;s<2*(i-n);s++)
				printf("  "); // 2 spaces
			
			for (int j=2*n;j>i;j--)
				printf("* "); //with space
			
		}
		printf("\n");
	}
	return 0;
}
