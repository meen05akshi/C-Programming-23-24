#include <stdio.h>
int main()
{
	int n;
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
	
	printf("\nSum of both matrices is: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]+b[i][j]);
		printf("\n");
	}
			
	printf("\nDifference of both matrices is: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]-b[i][j]);
		printf("\n");
	}
	
	return 0;
	
	
}
