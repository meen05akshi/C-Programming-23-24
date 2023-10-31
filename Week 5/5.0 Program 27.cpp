#include <stdio.h>
int main()
{
	int n;
	char c='y';
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if (i==j)
			{
				if(a[i][j]!=1)
				{
					c='n';
					break;
				}
			}
			else
			{
				if(a[i][j]!=0)
				{
					c='n';
					break;
				}
			}
		}
		if (c=='n')
			break;
	}
	
	if (c=='y')
		printf("\nIt is an identity matrix");
	else
		printf("\nIt is NOT an identity matrix");
	
	return 0;
		
}
