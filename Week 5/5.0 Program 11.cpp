#include <stdio.h>
int main()
{
	int n,choice=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				printf("The element that repeats is: %d",a[i]);
				printf("\nIndex of this element is: %d",j);
				choice=1;
				break;
			}
			
		}
		if (choice==1)
			break;
	}
	return 0;
		
}
