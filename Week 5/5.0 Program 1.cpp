#include <stdio.h>
int main()
{
	int n;
	float sum=0.0,avg;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: \n");
	
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for (int i=0;i<n;i++)
	{
		if (max<a[i])
			max=a[i];
		if (min>a[i])
			min=a[i];
		sum+=a[i];
    	}

	avg=sum/n;
    	printf("\nMaximum value: %d",max);
    	printf("\nMinimum value: %d",min);
	printf("\nAvergae value: %d",avg);
 
	return 0;
}
