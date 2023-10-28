#include <stdio.h>
int main()
{
	int n,sum,choice=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter a value: ");
	scanf("%d",&sum);
		
	for(int i=0;i<n;i++)
	{
		choice=0;
		for(int j=i+1;j<n;j++)
		{
			if (a[i]+a[j]==sum)
			{
				printf("\nTrue\n");
				printf("%d %d",a[i],a[j]);
				choice=1;
				break;
			}
		}
		if (choice==1)
			break;
		else
			printf("\nFalse");
	}
	return 0;
}
