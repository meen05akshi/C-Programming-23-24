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
			for (int j=0;j<n/2-i;j++)
				printf("* "); //with space
		}
		
		else
		{
			for (int j=n/2;j<=i;j++)
				printf("* "); //with space
		}
		printf("\n");
	}
	return 0;
}
