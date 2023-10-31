#include <stdio.h>
int main()
{
	int n,x;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array in ascending order: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter value of x: ");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>=x)
		{
			printf("\nThe ceiling of %d is: %d ",x,a[i]);
			break;
		}
	}
	return 0;
}
