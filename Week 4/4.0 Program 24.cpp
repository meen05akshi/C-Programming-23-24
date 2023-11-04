#include <stdio.h>
int main()
{
	int n,k=1;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n][n];
	
	for(int i=0;i<(n+1)/2;i++)
	{
		for(int p=i;p<n-i;p++)
			a[i][p]=k++;
		
		for(int q=i+1;q<n-i;q++)
			a[q][n-i-1]=k++;
			
		for(int r=n-2-i;r>=i;r--)
			a[n-i-1][r]=k++;
		
		for(int s=n-2-i;s>i;s--)
			a[s][i]=k++;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
		
}
