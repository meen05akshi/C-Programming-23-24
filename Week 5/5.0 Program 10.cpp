#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Duplicate elements are: ");
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d ",a[i]);
				for(int k=j;k<n-1;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
		}
	}
	return 0;
}
