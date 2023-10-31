#include <stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
		b[i]=a[i];	
	
	printf("\nOriginal array is: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\nCopied array is: ");
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	
	return 0;
}
