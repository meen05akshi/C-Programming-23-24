#include <stdio.h>
int main()
{
	int n;
	printf("Enter an even value n: ");
	scanf("%d",&n);
	printf("\n");
	
	for (int i=0;i<n;i++)
	{
		if (i<n/2)
		{
			for (int s=0;s<i;s++)
				printf("  "); //2 spaces
			
			for (int j=0;j<n/2-i;j++)
				printf("* "); //with space
		}
		else
		{
			for (int s=0;s<n-i-1;s++)
				printf("  "); //2 spaces
				
			for (int j=n/2;j<=i;j++)
				printf("* "); // with space
		}
		printf("\n");
	}
	return 0;
}
