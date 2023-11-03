#include <stdio.h>
int main()
{
	int n,sum=0,o=0,e=0;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n],odd[n],even[n];
	int size=n;
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
			odd[o]=a[i];
			o++;
		}
		else
		{
			even[e]=a[i];
			e++;
		}
	}
	
	printf("\nArray of odd numbers: ");
	for(int i=0;i<o;i++)
		printf("%d ",odd[i]);
		
	printf("\nArray of even numbers: ");
	for(int i=0;i<e;i++)
		printf("%d ",even[i]);
	
	return 0;
}
