#include <stdio.h>
int main()
{
	int n,temp,k,count=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: \n");
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter number to be found: ");
	scanf("%d",&k);
	
	for (int i=0;i<n;i++)
	{
		if (a[i]==k)
			count++;
	}
	
	printf("Element %d occurs %d times in the array",k,count);
	return 0;
}
	
