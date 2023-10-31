#include <stdio.h>
int main()
{
	int n,num,pos;
	printf("Enter the value to be inserted: ");
	scanf("%d",&num);
	printf("Enter position where value is to be inserted: ");
	scanf("%d",&pos);
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n+1;i++)
	{
		if (i==pos-1)
		{
			for(int j=n;j>i;j--)
			{
				a[j]=a[j-1];
			}
			a[i]=num;
			break;
		}
	}
	
	printf("\nAfter inserting the element, the new list is: ");
	for(int i=0;i<n+1;i++)
		printf("%d ",a[i]);
	return 0;
		
}
