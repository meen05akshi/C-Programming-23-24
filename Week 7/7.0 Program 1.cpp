#include <stdio.h>
float avg(int *);
int n;
int main()
{
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array:\n ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
		
	}
	float c=avg(&a[0]);
	
	printf("Average of array elements is: %f",c);
	return 0;
}

float avg(int *x)
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(x+i);
	}
	
	float average=sum/n;
	return average;
}
