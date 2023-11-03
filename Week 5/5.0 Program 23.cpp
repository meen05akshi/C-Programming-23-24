#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("Enter elements of Matrix 1: \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("\nEnter elements of Matrix 2: \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<n;k++)
		{
			sum=0;
			for(int j=0;j<n;j++)
				sum=sum+a[i][j]*b[j][k];
			printf("%d ",sum);
		}
		printf("\n");
	} 
	return 0;
}
