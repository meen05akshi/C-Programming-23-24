#include <stdio.h>
int main()
{
	int n,choice=0;
	printf("Enter length of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		choice=0;
		for(int j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
				choice=1;
		}
		if (choice==0)
		{
			printf("\nFirst non repeating element is: %d",a[i]);
			break;
		}
	}
	return 0;
}
