#include <stdio.h>
int main()
{
	int n,count=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if (a[i]==a[j])
				count++;
		}
		b[i]=count;
	}
	
	int size=n;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if (a[i]==a[j])
			{
				for(int k=j;k<size-1;k++)
				{
					a[k]=a[k+1];
					b[k]=b[k+1];
				}
				size--;
				j--;
			}
		}
	}
	
	printf("\nElement \t Frequency");
	for(int i=0;i<size;i++)
		printf("\n%d \t\t\t %d",a[i],b[i]);

	return 0;
}


