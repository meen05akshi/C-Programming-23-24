#include <stdio.h>
int main()
{
	int n,temp;
	printf("Enter last limit of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of an array with %d elements from 1 to %d:\n",n-1,n);
	for (int i=0;i<n-1;i++)
		scanf("%d",&a[i]);
		
	for(int i=0;i<n-2;i++)
	{
		for(int j=0;j<n-i-2;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		
	for(int i=1;i<=n;i++)
	{
		if (a[i-1]!=i)
		{
			printf("\nMissing number is %d",i);
			break;
		}
			
	}
	return 0;
}
