#include <stdio.h>
int main()
{
	int n,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for (int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	
	printf("New array is: ");
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
	
	return 0;
}
