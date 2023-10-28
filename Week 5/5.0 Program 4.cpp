#include <stdio.h>
int main()
{
	int n,temp;
	printf("Enter even size for an array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: ");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for (int i=0;i<n;i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	
	printf("New array is: ");
	
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
	
	return 0;
}
