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
			printf(" "); //1 space
		
		for (int j=0;j<2*n-i-1;j++)
		{
			if (j==0 || j==2*n-i-2)
				printf("*");
			else
				printf("-");
		}
		printf("\n");
	}
	return 0;
}
