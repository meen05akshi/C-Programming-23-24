#include <stdio.h>
int main()
{
	int n,avg,sum;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("\nOUTPUT:\n");
	for(int i=0;i<n;i++)
	{
		avg=sum=0;
		for(int j=0;j<=i;j++)
		{
			sum+=a[j];
		}
		avg=sum/(i+1);
		printf("%d ",avg);
	}
	
	return 0;	
}
