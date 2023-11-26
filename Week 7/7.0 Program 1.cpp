#include <stdio.h>
float avg(int x);
int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array:\n ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
		
	}
	
	printf("Average of array elements is: %f",c);
	return 0;
}

float avg(int x)
{
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=b[i];
	}
	
	float average=sum/n;
	return average;
}
