#include <stdio.h>
int main()
{
	int n,temp,k,count=0,j;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[j]==a[i])
			{
				k=j;
				while (k<n-1)
				{
					a[k]=a[k+1];
					k++;
				}
				n--;
				j--;
				
			}
		}
	}
	
	printf("New array: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}


