#include <stdio.h>
int main()
{
	int a[3][3];
	printf("Enter elements of this 3X3 2D Matrix: \n");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	
	printf("\nElements of the matrix are:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
	
}
