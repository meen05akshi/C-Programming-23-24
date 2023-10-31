#include <stdio.h>
int main()
{
	int n,x,avg,count;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter value of x: ");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++)
	{
		avg=(a[i]+x)/2;
		count=0;
		for(int j=0;j<n;j++)
		{
			if (avg==a[j])
				count++;
		}
		b[i]=count;
	}
	
	printf("\nArray storing count result is: ");
	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	
	return 0;
	
}
