#include <stdio.h>
int main()
{
	int n,temp,k;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter value of k: ");
	scanf("%d",&k);
		
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
	
	printf("%d Smallest element of the array is: %d",k,a[k-1]);
	printf("\n");
	printf("%d Largest element of the array is: %d",k,a[n-k]);
	
	return 0;
}
