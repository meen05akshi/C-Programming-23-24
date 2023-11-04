#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter size of matrix: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter elements of matrix: \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i==n-j-1)
				sum+=a[i][j];
		}
	}
	
	printf("\nSum of elements of right diagonal is: %d",sum)	;
	return 0;
}
