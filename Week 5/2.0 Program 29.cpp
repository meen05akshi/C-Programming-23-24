#include <stdio.h>
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int size=n;
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
	
	printf("\nNumber of distinct elements is :%d",size);
	return 0;
}
