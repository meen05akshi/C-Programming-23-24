#include <stdio.h>
int main()
{
	int n,num,sum=0;
	char flag='y';
	printf("Enter value of n: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter sum: ");
	scanf("%d",&num);
	
	for(int i=0;i<n;i++)
	{
		sum=a[i];
		for(int j=i+1;j<n;j++)
		{
			sum+=a[j];
			for(int k=j+1;k<n;k++)
			{
				sum+=a[k];
				if (sum==num)
				{
					flag='n';
					printf("\nTrue\n");
					printf("%d %d %d",a[i],a[j],a[k]);
					break;
				}
				sum-=a[k];
			}
			if (flag=='n')
				break;
			sum-=a[j];
		}
		if (flag=='n')
				break;
	}
	 if (flag=='y')
	 	printf("\nNo such triplet exists.");
	return 0;
}
