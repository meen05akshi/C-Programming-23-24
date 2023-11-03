#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	int size=n;
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if (a[i]==a[j])
			{
				for(int k=j;k<size-1;k++)
					a[k]=a[k+1];
				size--;
				j--;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
