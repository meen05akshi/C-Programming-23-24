#include <stdio.h>
int main()
{
	int n,temp,num;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter number to be inserted: ");
	scanf("%d",&a[n]);
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\nAfter insert list is:\n");
	for(int i=0;i<n+1;i++)
		printf("%d ",a[i]);
	
	return 0;
}
